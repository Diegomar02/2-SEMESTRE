//  EJERCICIO 1
//  ID = 245119
//  DIEGO MÁRQUEZ GÓMEZ
//  FECHA DE ENTREGA = 15 DE FEBRERO DEL 2021 A LAS 11 DE LA NOCHE
//  GRUPO= 2C

using namespace std;

//PROTOTIPO
void multiplicacion(int m1[3][3], int m2[3][3]);


int main(){//INICIO PROGRAMA
    int matriz1[3][3]; //TAMAÑO 3X3
    int matriz2[3][3]; //TAMAÑO 3X3
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Numero en la posicion ["<<i<<"]["<<j<<"] para la Matriz 1 = ";
            cin>>matriz1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Numero en la posicion ["<<i<<"]["<<j<<"] para la Matriz 2 = ";
            cin>>matriz2[i][j];
        }
    }
    cout<<"\nMatriz 1 = \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nMatriz 2 = \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }
    multiplicacion(matriz1,matriz2);
}//FIN PROGRAMA

//PROTOTIPO
void multicacion(int matriz1[3][3], int matriz2[3][3]){
    int matriz3[3][3];
    cout<<"\nMatriz 3 (matriz1 x matriz2) = \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz3[i][j] = matriz1[i][j]*matriz2[i][j];
            cout<<matriz3[i][j]<<" ";
        }
        cout<<"\n";
   }
}

