#include <iostream>

#include <stdlib.h>

using namespace std;

// Prototipos de Funciones
void captura();
void mostrar1(int **matriz, int f, int c);
void mostrar2(int **matriz, int f, int c);
int **matriz, f, c;


int main(){
    
    cout << "\n\n\t\t Ejercicio No. 3 Pretty Print\n";
    captura();
    mostrar1(matriz, f, c);
    mostrar2(matriz, f, c);
    
    return 0;
} //Fin FunciÛn Principal

void captura(){
    
    cout << "\n\t ..Captura de Datos.. \n\n";
    
    //int f, c;
    
    // Captura de Filas y Columnas .......................................
    cout << "Digite el numero de Filas: ";
    cin >> f; // filas
    cout << "Digite el numero de Columnas: ";
    cin >> c; // columnas
    
    // Reservar Memoria para matriz dinamica................................
    matriz = new int*[f]; // Reservando Memoria para las Filas, cada fila tiene su correspondiente numero de columnas
    
    for(int i=0; i<f; i++){
        matriz[i] = new int[c]; // Reservando Memoria para las columnas
    }// fin ciclo for
    
    cout << "\n\nIngreso de Datos: \n\n";
    
    // Captura de Datos .......................................................
    for(int j=0; j<f; j++){
        for(int k=0; k<c; k++){
            cout << "Ingrese un numero ["<< j <<"] ["<< k <<"] : ";
            cin >>*(*(matriz+j)+k); // *(*(matriz+i)+j)
        }//fin ciclo columnas
    }//fin ciclo filas
    
    
}// Fin FunciÛn Captura

void mostrar1(int **matriz, int f, int c){
    cout << "\n\nMostrando Matriz Bonita 1\n\n";
    for(int l=0; l<c; l++){
        cout << "\t" << l << "\t ";
    }
    cout << "\n";
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout << "\t" << *(*(matriz+i)+j) << "\t|";
        }//Fin ciclo columnas
        cout << "\n";
    }//fin ciclo filas
    
}// Fin FunciÛn Mostrar

void mostrar2(int **matriz, int f, int c){
    cout << "\n\nMostrando Matriz Bonita 2\n\n";
    for(int l=0; l<c; l++){
        cout << "\t" << l << "\t ";
    }
    cout << "\n";
    for(int m=0; m<c; m++){
        cout << "----------------";
    }
    cout << "\n";
    
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout << "\t" << *(*(matriz+i)+j) << "\t|";
        }//Fin ciclo columnas
        cout << "\n";
        for(int m=0; m<c; m++){
            cout << "----------------";
        }
        cout << "\n";
    }//fin ciclo filas
    
    // Liberar Memoria.......................
    for(int i =0; i<f; i++){
        delete[] matriz[i];
    }// fin ciclo para liberar memoria filas
    
    delete[] matriz; // liberar memoria columnas
    
}// Fin FunciÛn Mostrar


