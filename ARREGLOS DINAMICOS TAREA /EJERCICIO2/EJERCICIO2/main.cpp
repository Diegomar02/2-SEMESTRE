//DIEGO MARQUEZ GOMEZ
//FECHA DE ENTREGA JUEVES 3 DE JUNIO 2021
//EJERCICIO 2
//ID = 245119

#include <iostream>
#include <stdlib.h>

using namespace std;

void captura();
void mostrar(int **matriz, int fil, int col);
int **matriz, fil, col;

int main(){
    captura();
    mostrar(matriz, fil, col);
    return 0;
}

void captura(){
    cout<<"NUMERO DE FILAS = ";
    cin>>fil;
    cout<<"NUMERO DE COLUMNAS = ";
    cin>>col;
    matriz=new int*[fil];
    for(int i=0;i<fil;i++){
        matriz[i]=new int[col];
    }
    for(int ii=0;ii<fil;ii++){
        for(int iii=0;iii<col;iii++){
            cout<<"NUMERO = ["<<ii<<"] ["<<iii<<"] = ";
            cin>>*(*(matriz+ii)+iii);
        }
    }
}

void mostrar(int **matriz, int fil, int col){
    for(int i=(fil-1);i>=0;i--){
        for(int ii=(col-1);ii>=0;ii--){
            cout<<*(*(matriz+i)+ii)<< "\t";
        }
        cout<<"\n";
    }
    for(int i =0;i<fil;i++){
        delete[]matriz[i];
    }
    delete[]matriz;
}

