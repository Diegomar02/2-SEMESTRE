//DIEGO MARQUEZ GOMEZ
// 1 DE MARZO DEL 2021
//EJERCICIO 3 DE 3
// ID = 245119

#include <iostream>
using namespace std;

long maximoComunDivisorRecursiva(int numero1,int numero2); //PROTOTIPO RECURSIVA...
long maximoComunDivisorIterativa(int numero1,int numero2); //PROTOTIPO ITERATIVA...

int main(){
    int numero1,numero2;
    cout<<"PRIMER NUMERO = ";
    cin>>numero1;
    cout<<"SEGUNDO NUMERO = ";
    cin>>numero2;
    cout<<"MCD RECURSIVA = "<<maximoComunDivisorRecursiva(numero1,numero2)<<endl;
    cout<<maximoComunDivisorIterativa(numero1,numero2)<<endl;
}

long maximoComunDivisorRecursiva(int numero1,int numero2){//INICIO MAXIMO COMUN DIVISOR RECURSIVA
    if(numero2==0){//INICIO IF
        return numero1;
    }//FIN IF
    else{//INICIO ELSE
        return maximoComunDivisorRecursiva(numero2,int(numero1%numero2));
    }//FIN ELSE
}//FIN MAXIMO COMUN DIVISOR RECURSIVA

long maximoComunDivisorIterativa(int numero1,int numero2){//INICIO MAXIMO COMUN DIVISOR ITERATIVO
    int ref2,numero3,numero4;
    bool ref;
    ref=true;
    do{//INICIO DO
        if(numero1<numero2){//INICIO IF
            ref2=numero1;
            numero1=numero2;
            numero2=ref2;
        }//FIN IF
        else{//INICIO ELSE
            if(numero1==numero2){//INICIO IF
                cout<<"MCD INTERATIVO = "<<numero2<<endl;
                ref=false;
            }//FIN IF
            else{//INICIO ELSE
                numero3=numero1/numero2;
                numero4=numero1%numero2;
                if(numero4==0){//INICIO IF
                    cout <<"MDC INTERATIVO "<<numero2<<endl;
                    ref=false;
                }//FIN IF
                else{//INICIO ELSE
                    numero1=numero2;
                    numero2=numero4;
                }//FIN ELSE
            }//FIN ELSE
        }//FIN ELSE
    }//FIN DO
    while(ref);
    return 0;
}//FIN MAXIMO COMUN DIVISOR ITERATIVO


