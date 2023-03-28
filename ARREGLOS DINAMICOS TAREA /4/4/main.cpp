//DIEGO MARQUEZ GOMEZ
//FECHA DE ENTREGA JUEVES 3 DE JUNIO 2021
//EJERCICIO 4
//ID = 245119

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void captura();
void mostrar(int *arreglo, int suma, int a);
int *arreglo,*puntos,suma,a;

int main(){
    captura();
    mostrar(arreglo, suma, a);
    return 0;
}

void captura(){
    srand(time(NULL));
    cout << "NUMERO DE COLUMNAS = ";
    cin >> a;
    arreglo = new int[a];
        for(int k=0; k<a; k++){
            *(arreglo+k) = rand() % 101;
        }
        puntos = &suma;
        for(int k=0;k<a;k++){
            *puntos+=*(arreglo+k);
        }
}

void mostrar(int *arreglo,int suma, int a){
    srand(time(NULL));
        for(int i=0; i<a; i++){
        cout << *(arreglo+i) << " \t";
    }
    cout << "Suma: " << suma << endl;
    int suma2;
    int *punte = NULL;
    punte = &suma2;
    for(int i=0; i<a; i++){
        if(*(arreglo+i)<10){
            *punte += *(arreglo+i);
        }
    }
    cout << "SUMA = " << *punte << endl;
    int i;
    do{
         i = rand()%20;
    }while(i > a || i==0);
    int m = 20;
    int *B = new int(m);
    for(int k=0; k<m; k++){
        *(B+k) = 0;
    }
    for(int l=0; l<i; l++){
        *(B+i) += *(arreglo+l);
    }
    cout << "\nSUMATORIA = "<<endl;
    cout << "SUMA =M" << i << " ]: " << *(B+i) << endl;
    for(int a=0; a<m; a++){
        cout << *(B+a) << "  ";
    }
    delete B;
    delete[] punte;
    delete[] arreglo;
    delete[] puntos;
}
    

