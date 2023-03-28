//DIEGO MARQUEZ GOMEZ
// 1 DE MARZO DEL 2021
//EJERCICIO 2 DE 3
// ID = 245119

#include <iostream>
using namespace std;

long multiplicacionInterativaRusa1(int numero1,int numero2); //PROTOTIPO ITERATIVA...
long multiplicacionRecursivaRusa2(int numero1,int numero2); //PROTOTIPO RECURSIVA...

int main(){//INICION PROGRAMA
    int numero1,numero2;
    cout<<"PRIMER NUMERO = ";
    cin>>numero1;
    cout<<"SEGUNDO NUMERO = ";
    cin>>numero2;
    cout<<"MULTIPLICACION INTERATIVA RUSA = "<<multiplicacionInterativaRusa1(numero1,numero2)<<endl;
    cout <<"MULTIPLICACION RECURSIVA RUSA = "<<multiplicacionRecursivaRusa2(numero1,numero2)<<endl;
}//FIN PROGRAMA

long multiplicacionInterativaRusa1(int numero1,int numero2){//INICIO MULTIPLICACION INTERARIVA
    long res=0;
    do{//INICIO DO
        if(numero1%2!=0){//INICIO IF
            res+=numero2;
        }//FIN IF
        numero1=numero1/2;
        numero2=numero2*2;
    }//FIN DO
    while(numero1!=0);
    return res;
}//FIN MULTIPLICACION INTERATIVA

long multiplicacionRecursivaRusa2(int numero1,int numero2){//INICIO MULTIPLICACION RECURSIVA
    if(numero1==1){//INICIO IF
        return numero2;
    }//FIN IF
    if(numero1%2!=0){//INICIO IF
        return (numero2+multiplicacionRecursivaRusa2(numero1/2,numero2*2));
    }//FIN IF
    else{//INICIO ELSE
        return multiplicacionRecursivaRusa2(numero1/2,numero2*2);
    }//FIN ELSE
}//FIN MULTIPLICAION RECURSIVA
