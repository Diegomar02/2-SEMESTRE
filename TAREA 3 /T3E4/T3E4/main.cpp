// Diego Márquez Gomez
//ID 245119
//Ejercicio 4

#include <iostream>
#include <string.h>
#define TAMAÑO 2

using namespace std;


struct Oferta{
    char NombreEmpresa[20];
    char Ciudad[20];
    int Telefono;
    float Salario;
    int Posibilidad;
};

void menu();
void Captura(Oferta Trabajo[]);
void Mostrar(Oferta Trabajo[]);
void OrdenarSalario(Oferta Trabajo[]);
void OrdenarPosibilidad(Oferta Trabajo[]);

int main(){
    menu();
}

void menu(){
    Oferta Trabajo[TAMAÑO];
    int Opc;
    do{
        cout<<"\nBOLSA DE TRABAJO\n" << endl;
        cout<<"1. Captura de Ofertas\n";
        cout<<"2. Muestra de Ofertas\n";
        cout<<"3. Orden por Salario\n";
        cout<<"4. Orden por Posibilidad\n";
        cout<<"5. Salir\n" << endl;
        cout<<"Selecciona una Opcion: ";
        cin>>Opc;
        switch(Opc){
            case 1:
                Captura(Trabajo);
                break;
            case 2:
                Mostrar(Trabajo);
                break;
            case 3:
                OrdenarSalario(Trabajo);
                break;
            case 4: OrdenarPosibilidad(Trabajo);
                break;
        }
    }while(Opc != 5);
}

void Cap(Oferta Trabajo[]){
    cout<<"\n";
    for(int i=0;i<TAMAÑO;i++){
        cout<<"Nombre = ";
        cin>>Trabajo[i].NombreEmpresa;
        cout<<"Ciudad = ";
        cin>>Trabajo[i].Ciudad;
        cout<<"Telefono = ";
        cin>>Trabajo[i].Telefono;
        cout<<"Salario = ";
        cin>>Trabajo[i].Salario;
        cout<<"Posibilidades de Promocion =  ";
        cin>>Trabajo[i].Posibilidad;
        cout<<"\n";
    }
}

void Mostrar(Oferta Trabajo[]){
    cout<<"\n";
    for(int i=0;i<TAMAÑO;i++){
        cout<<"Nombre = "<<Trabajo[i].NombreEmpresa<<endl;
        cout<<"Ciudad = "<<Trabajo[i].Ciudad<<endl;
        cout<<"Telefono = "<<Trabajo[i].Telefono<<endl;
        cout<<"Salario = "<<Trabajo[i].Salario<<endl;
        cout<<"Posibilidades de Promocion = "<<Trabajo[i].Posibilidad<<endl;
        cout<<"\n";
    }
}

void OrdenarSalario(Oferta Trabajo[]){
    Oferta Aux;
    for(int i=0;i<TAMAÑO;i++){
        for(int j=0;j<TAMAÑO-1;j++){
            if(Trabajo[j].Salario-Trabajo[j+1].Salario>0){
                Aux=Trabajo[j];
                Trabajo[j]=Trabajo[j+1];
                Trabajo[j+1]=Aux;
            }
        }
    }
}

void OrdenarPosibilidad(Oferta Trabajo[]){
    Oferta Aux;
    for(int i=0;i<TAMAÑO;i++){
        for(int j=0;j<TAMAÑO-1;j++){
            if(Trabajo[j].Posibilidad-Trabajo[j+1].Posibilidad>0){
                Aux=Trabajo[j];
                Trabajo[j]=Trabajo[j+1];
                Trabajo[j+1]=Aux;
            }
        }
    }
}
