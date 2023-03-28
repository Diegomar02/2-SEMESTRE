// Diego Márquez Gomez
//ID 245119
//Ejercicio 6


#include <iostream>
#define TAMAÑO 1

using namespace std;

struct TAlumnos{
    int ClaveAlumno;
    int Calif1;
    int Calif2;
    int Calif3;
};

struct TColegio{
    int ClaveColegio;
    int CantidadAlumnos;
    TAlumnos Alumno[];
};

void menu();
void Captura(TColegio Colegio[]);
void Mostar(TColegio Colegio[]);

int main(){
    menu();
}

void menu(){
    TColegio Colegio[TAMAÑO];
    int opc;
    do{
        cout<<"\nBASE DE DATOS DEL COLEGIO\n"<<endl;
        cout<<"1. Captura de Datos\n";
        cout<<"2. Muestra de Datos\n";
        cout<<"3. Salir\n"<<endl;
        cout<<"Selecciona una Opcion: ";
        cin>>opc;
        switch(opc){ // SELECCION DE OPCION...
            case 1:
                Captura(Colegio);
                break;
            case 2:
                Mostar(Colegio);
                break;
        }
    }while(opc!=3);
}

void Captura(TColegio Colegio[]){
    cout << "\n";
    for(int i=0;i<TAMAÑO;i++){
        cout<<"Clave de Colegio = ";
        cin>>Colegio[i].ClaveColegio;
        cout<<"Cantidad de Alumnos = ";
        cin>>Colegio[i].CantidadAlumnos;
        
        for(int j=0;j<Colegio[i].CantidadAlumnos; j++){
            cout<<"Clave del Alumno = ";
            cin>>Colegio[i].Alumno[j].ClaveAlumno;
            cout<<"Calificacion 1 = ";
            cin>>Colegio[i].Alumno[j].Calif1;
            cout<<"Calificacion 2 = ";
            cin>>Colegio[i].Alumno[j].Calif2;
            cout<<"Calificacion 3 = ";
            cin>>Colegio[i].Alumno[j].Calif3;
            cout<<"\n";
        }
    }
}

void Mostrar(TColegio Colegio[]){
    cout<<"\n";
    for(int i=0;i<TAMAÑO;i++){
        cout<<"Clave de Colegio: "<<Colegio[i].ClaveColegio<<endl;
        cout<<"Cantidad de Alumnos ="<<Colegio[i].CantidadAlumnos<<endl;
        cout<<"\n";
        for(int j=0; j<Colegio[i].CantidadAlumnos; j++){
            cout<<"Clave del Alumno = "<<Colegio[i].Alumno[j].ClaveAlumno<<endl;
            cout<<"Calificacion 1 = "<<Colegio[i].Alumno[j].Calif1<<endl;
            cout<<"Calificacion 2 = "<<Colegio[i].Alumno[j].Calif2<<endl;
            cout<<"Calificacion 3 = "<<Colegio[i].Alumno[j].Calif3<<endl;
            if(Colegio[i].Alumno[j].Calif1+Colegio[i].Alumno[j].Calif2+Colegio[i].Alumno[j].Calif3<21){
                cout<<"El Alumno esta Reprobado";
            }
            else{
                cout<<"El Alumno esta Aprobado";
            }
            cout<<"\n";
        }
    }
}

