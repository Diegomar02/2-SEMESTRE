// Diego Márquez Gomez
//ID 245119
//Ejercicio 3

#include <iostream>
#include <string.h>
#define NUMERO 10

using namespace std;

struct Correos{
    char Correo1[30];
    char Correo2[30];
};

struct Agenda{
    char Nombre[30];
    char Direccion[30];
    int Telefono;
    int Celular;
    Correos Correo;
};

void menu();
void Captura(Agenda Contacto[NUMERO]);
void Mostrar(Agenda Contacto[NUMERO]);
void OrdenarNombre(Agenda Contacto[NUMERO]);

int main(){//INICIO PROGRAMA
    menu();
}//FIN PROGRAMA

void menu(){//INICIO MENU
    Agenda Contacto[NUMERO];
    int Opc;
    do{//INICIO DO
        cout<<"\nAGENDA\n"<<endl;
        cout<<"1. Captura de Datos\n";
        cout<<"2. Muestra de Datos\n";
        cout<<"3. Orden por Nombre\n";
        cout<<"4. Busqueda por Nombre\n";
        cout<<"5. Salir\n"<<endl;
        cout<<"Selecciona una Opcion: ";
        cin>>Opc;
        switch(Opc){//INICIO SWITCH
            case 1: Captura(Contacto); break;
            case 2: Mostrar(Contacto); break;
            case 3: OrdenarNombre(Contacto); break;
            //case 4: BusquedaxNom(Contacto); break;
        }//FIN SWITCH
    }while(Opc != 5);
}//FIN MENU

void Captura(Agenda Contacto[]){//INICIO CAPTURA
    cout<<"\n";
    for(int i=0;i<NUMERO;i++){//INICIO FOR
        cout<<"Nombre = ";
        cin>>Contacto[i].Nombre;
        cout<<"Direccion = ";
        cin>>Contacto[i].Direccion;
        cout<<"Telefono = ";
        cin>>Contacto[i].Telefono;
        cout<<"Celular = ";
        cin>>Contacto[i].Celular;
        cout<<"Correo 1 = ";
        cin>>Contacto[i].Correo.Correo1;
        cout<<"Correo 2 = ";
        cin>>Contacto[i].Correo.Correo2;
        cout<<"\n";
    }//FIN FOR
}//FIN CAPTURA

void Mostrar(Agenda Contacto[]){//INICIO MOSTRAR
    cout<<"\n";
    for(int i=0;i<NUMERO;i++){//INICIO FOR
        cout<<"Nombre = "<<Contacto[i].Nombre<<endl;
        cout<<"Direccion = "<<Contacto[i].Direccion<<endl;
        cout<<"Telefono = "<<Contacto[i].Telefono<<endl;
        cout<<"Celular = "<<Contacto[i].Celular<<endl;
        cout<<"Correo 1 = "<<Contacto[i].Correo.Correo1;
        cout<<"Correo 2 = "<<Contacto[i].Correo.Correo2;
        cout<<"\n";
    }//FIN FOR
}//FIN MOSTRAR

void OrdenarNombre(Agenda Contacto[NUMERO]){//INICIO ORDENANR NOMBRE
    Agenda Aux;
    for(int i=0; i<NUMERO; i++){//INICIO FOR
        for(int j=0; j<NUMERO-1; j++){//INICIO FOR
            if(strcmp(Contacto[j].Nombre, Contacto[j+1].Nombre)>0){//INICIO IF
                Aux = Contacto[j];
                Contacto[j] = Contacto[j+1];
                Contacto[j+1] = Aux;
            }//FIN IF
        }//FIN FOR
    }//FIN FOR
}//FIN ORDENAR NOMBRE 
