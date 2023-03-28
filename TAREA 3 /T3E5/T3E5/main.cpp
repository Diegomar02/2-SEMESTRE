// Diego Márquez Gomez
//ID 245119
//Ejercicio 5

#include <iostream>
#define TAMAÑO 1

using namespace std;

struct Resultados{
    float Calif1;
    float Calif2;
    float Calif3;
    
};

struct TAlumno{
    int ID;
    char Sexo;
    Resultados Calif;
    
};

void Menu();
void Captura(TAlumno Alumno[]);
void Mostrar(TAlumno Alumno[]);
void Capturar(TAlumno Alumnos[]);
void Sexo(TAlumno Alumnos[]);

int main(){
    Menu();
}

void Menu(){
    
    TAlumno Alumno[TAMAÑO], Alumnos[50];
    int opc;
    
    do{ // MENU DE OPCIONES...
    
        cout << "\n - BASE DE DATOS (ALUMNOS) - \n" << endl;
        cout << "Captura de Datos ..................... 1 \n";
        cout << "Mostrar Datos (A/R) .................. 2 \n";
        cout << "Captura de Datos (50) ................ 3 \n";
        cout << "Sexo M (+1) .......................... 4 \n";
        cout << "Salir ................................ 5 \n" << endl;
        cout << "Selecciona una Opcion: ";
        cin >> opc;
        switch(opc){ // SELECCION DE OPCION...
            case 1: Captura(Alumno);
                break;
            case 2: Mostrar(Alumno);
                break;
            case 3: Captura(Alumnos);
                break;
            case 4: Sexo(Alumnos);
                break;
        }
    }while(opc != 4);
}

void Captura(TAlumno Alumno[]){
    cout<<"\n";
    for(int i=0;i<TAMAÑO;i++){
        cout<<"ID = ";
        cin>>Alumno[i].ID;
        cout<<"Sexo del Alumno = ";
        cin>>Alumno[i].Sexo;
        cout<<"Calificacion 1 = ";
        cin>>Alumno[i].Calif.Calif1;
        cout<<"Calificacion 2 = ";
        cin>>Alumno[i].Calif.Calif2;
        cout<<"Calificacion 3 = ";
        cin>>Alumno[i].Calif.Calif3;
        cout<<"\n";
    }
}

void Mostar(TAlumno Alumno[]){
    cout << "\n";
    for(int i=0;i<TAMAÑO;i++){
        cout<<"ID = "<<Alumno[i].ID<<endl;
        cout<<"Sexo del Alumno = "<<Alumno[i].Sexo<<endl;
        cout<<"Calificacion 1 = "<<Alumno[i].Calif.Calif1<<endl;
        cout<<"Calificacion 2 = "<<Alumno[i].Calif.Calif2<<endl;
        cout<<"Calificacion 3 = "<<Alumno[i].Calif.Calif3<<endl;
        if(Alumno[i].Calif.Calif1+Alumno[i].Calif.Calif2+Alumno[i].Calif.Calif3<21){
            cout<<"El Alumno esta Reprobado";
        }
        else{
            cout<<"El Alumno esta Aprobado";
        }
        cout << "\n";
    }
}

void Capturar(TAlumno Alumnos[]){
    cout<<"\n";
    for(int i=0;i<50;i++){
        cout<<"ID = ";
        cin>>Alumnos[i].ID;
        cout<<"Sexo = ";
        cin>>Alumnos[i].Sexo;
        cout<<"Calificacion 1 = ";
        cin>>Alumnos[i].Calif.Calif1;
        cout<<"Calificacion 2 = ";
        cin>>Alumnos[i].Calif.Calif2;
        cout<<"Calificacion 3 = ";
        cin>>Alumnos[i].Calif.Calif3;
        cout<<"\n";
    }
}

void SexoM(TAlumno Alumnos[]){
    cout<<"\n";
    for(int i=0;i<50;i++){
        cout<<"ID = " << Alumnos[i].ID<<endl;
        cout<<"Sexo del Alumno = "<<Alumnos[i].Sexo<<endl;
        cout<<"Calificacion 1 = "<<Alumnos[i].Calif.Calif1<<endl;
        cout<<"Calificacion 2 = "<<Alumnos[i].Calif.Calif2<< endl;
        cout<<"Calificacion 3 = "<<Alumnos[i].Calif.Calif3<<endl;
        switch(Alumnos[i].Sexo){
            case 'm':
            case 'M': Alumnos[i].Calif.Calif1=Alumnos[i].Calif.Calif1+1;
                      Alumnos[i].Calif.Calif2=Alumnos[i].Calif.Calif1+1;
                      Alumnos[i].Calif.Calif3=Alumnos[i].Calif.Calif1+1;
                      if(Alumnos[i].Calif.Calif1+Alumnos[i].Calif.Calif2+Alumnos[i].Calif.Calif3<21){
                            cout<<"El Alumno esta Reprobado";
                        }
                        else{
                            cout<<"El Alumno esta Aprobado";
                        }
            case 'f':
            case 'F':
                if(Alumnos[i].Calif.Calif1+Alumnos[i].Calif.Calif2+Alumnos[i].Calif.Calif3<21){
                            cout<<"El Alumno esta Reprobado";
                        }
                        else{
                            cout<<"El Alumno esta Aprobado";
                        }
        }
    }
}

