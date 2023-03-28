// Diego Márquez Gomez
//ID 245119
//Ejercicio 1

#include <iostream>
#include <string.h>
#define TAM 10

using namespace std;

// ESTRUCTURAS...

struct Telefono{
    int Celular1;
    int Celular2;
};
struct Datos{//INICIO DATOS
    Telefono Celular;
    char Nombre[20];
    int CostoUnidad;
    char Apellido1[20];
    char Apellido2[20];
    char Estado[15];
    int NumeroUnidades;
};//FIN DATOS

void Morosos(Datos Clientes[]);
void Pagados(Datos Clientes[]);
void Captura(Datos Clientes[]);
void Mostar(Datos Clientes[]);
void menu();


int main(){//INICIO PROGRAMA
    menu();
}//FIN PROGRAMA


void menu(){//INICIO VOID MENU
    Datos Clientes[TAM];
    int Opc;
    do{ // MENU DE OPCIONES...
        cout<<"\n - FACTORAJE CLIENTES - \n"<<endl;
        cout<<"1. Captura de Datos\n";
        cout<<"2. Muestra de Datos\n";
        cout<<"3. Clientes Moroso\n";
        cout<<"4. Clientes Pagado\n";
        cout<<"5. Salir\n"<<endl;
        cout<<"Selecciona una Opcion = ";
        cin>>Opc;
        switch(Opc){//INICIO SWITCH
            case 1:
                Captura(Clientes); break;
            case 2:
                Mostar(Clientes); break;
            case 3:
                Morosos(Clientes); break;
            case 4:
                Pagados(Clientes); break;
        }//FIN SWITCH
    }while(Opc!=5);
}//FIN VOID MENU


void Captura(Datos Clientes[]){//INICIO VOID CAP
    cout<<"\n";
    for(int i=0;i<TAM;i++){//INICIO FOR
        cout<<"Nombre del Cliente = ";
        cin>>Clientes[i].Nombre;
        cout<<"Apellido Paterno = ";
        cin>>Clientes[i].Apellido1;
        cout<<"Apellido Materno = ";
        cin>>Clientes[i].Apellido2;
        cout<<"Numero de Unidades Solicitadas = ";
        cin>>Clientes[i].NumeroUnidades;
        cout<<"Costo de Unidad: ";
        cin>>Clientes[i].CostoUnidad;
        cout<<"Estado Moroso - Adeudado - Pagado = ";
        cin>>Clientes[i].Estado;
        cout<<"Telefono 1 = ";
        cin>>Clientes[i].Celular.Celular1;
        cout<<"Telefono 2 = ";
        cin>>Clientes[i].Celular.Celular2;
        cout<<"\n";
    }//FIN FOR
}//FIN VOID CAPTURA

void Mostar(Datos Clientes[]){//INICIO VOID MOSTRAR
    cout<<"\n";
    for(int i=0;i<TAM;i++){//INICIO FOR
        cout<<"NOMBRE = "<<Clientes[i].Nombre<<endl;
        cout<<"APELLIDO PATERNO = "<<Clientes[i].Apellido1<<endl;
        cout<<"APELLIDO MATERNO = "<<Clientes[i].Apellido2<<endl;
        cout<<"NUMERO DE UNIDADES = "<<Clientes[i].NumeroUnidades<<endl;
        cout <<"Costo de Unidad = "<<Clientes[i].CostoUnidad<<endl;
        cout<<"Estado = "<<Clientes[i].Estado << endl;
        cout<<"Telefono 1 = "<<Clientes[i].Celular.Celular1 << endl;
        cout<<"Telefono 2 = "<<Clientes[i].Celular.Celular2 << endl;
        cout<<"\n";
    }//FIN FOR
}//FIN VOID MOSTRAR

void Morosos(Datos Clientes[]){//INICIO VOID MOROSOS
    char Est[]="Moroso";
    cout<<"\n";
    cout<<"\n -Clientes en Estado Moroso- \n";
    for(int i=0;i<TAM;i++){//INICIO FOR
        cout << "\n";
        if(strcmp(Est,Clientes[i].Estado) == 0){//INICIO IF
            cout<<"El Cliente "<<Clientes[i].Nombre<<"-"<<Clientes[i].Apellido1<<"-" <<Clientes[i].Apellido2<<" es de Estado Moroso."<<endl;
        }//FIN IF
        else{//INICIO ELSE
            cout<<"El Cliente "<<Clientes[i].Nombre<<"-"<<Clientes[i].Apellido1<<"-"<<Clientes[i].Apellido2<<" NO es de Estado Moroso."<<endl;
        }//FIN ELSE
    }//FIN FOR
    cout << "\n";
}//FIN VOID MOROSOS

void Pagados(Datos Clientes[]){//INICIO PAGADOS
    cout<<"\n";
    int Abono=0;
    int Total=0;
    int Residuo=0;
    for(int i=0;i<TAM;i++){//INICIO FOR
        cout<<"Cantidad que se ha Liquidado: ";
        cin>>Abono;
        Total=Clientes[i].NumeroUnidades*Clientes[i].CostoUnidad;
        Residuo=Total-Abono;
        if(Abono<Total){//INICIO IF
            cout<<"El Cliente "<<Clientes[i].Nombre<<"-"<<Clientes[i].Apellido1<<"-"<<Clientes[i].Apellido2<<"debe aun la cantidad de = "<<Residuo<<endl;
        }//FIN IF
        else{//INICIO ELSE
            cout<<"El Cliente "<<Clientes[i].Nombre<<"-"<<Clientes[i].Apellido1<<"-"<<Clientes[i].Apellido2<<" ha pagado el adeudo."<<endl;
        }//FIN ELSE
        Abono = 0;
        Total = 0;
        Residuo = 0;
    }//FIN FOR
}//FIN PAGADOS 

