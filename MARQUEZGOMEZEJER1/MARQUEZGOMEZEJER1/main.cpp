//  EJERCICIO 1
//  ID = 245119
//  DIEGO MÁRQUEZ GÓMEZ
//  FECHA DE ENTREGA = 15 DE FEBRERO DEL 2021 A LAS 11 DE LA NOCHE
//  GRUPO= 2C

#include <iostream>

using namespace std;

int suma(int); //PROTOTICO
float media(int,int);

//PROGRAMA
int main(){//INICIO DEL PROGRAMA
    int numero, cantidad;
    int total;
    float mediaFinal;
    cout<<"Cantidad de numeros a sumar: ";
    cin>>cantidad;
    total=suma(cantidad);
    cout<<"La suma de los numeros es: "<<total<<endl;
    mediaFinal=media(total, cantidad);
    cout<<"La media de los numeros es: "<<mediaFinal<<endl;
    system("pause");
    cin>>numero;
}//FIN DEL PROGRAMA

//DESARROLLO DE PROTOTICOS
float media(int total, int cantidad){//INICIO FLOAT MEDIA
    float totalMedia;
    totalMedia=total/cantidad;
    return totalMedia;
}//FIN FLOAT MEDIA

int suma(int cant){//INICIO INT SUMA
    int totalSuma=0, numeroSuma;
    for(int i=0; i<cant; i++){//INCIO DEL FOR
        cout<<"Digite el numero "<<i+1<<" : ";
        cin>>numeroSuma;
        totalSuma=totalSuma+numeroSuma;
    }//FIN DEL FOR
    return totalSuma;
}//FIN DEL INT SUMA
