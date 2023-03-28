//DIEGO MARQUEZ GOMEZ
// 1 DE MARZO DEL 2021
//EJERCICIO 1 DE 3
// ID = 245119

#include <iostream>
using namespace std;

long divisionIterativa(int num1, int num2); //PROPOTIPO ITERATIVA...
long divisionRecursiva(int num1, int num2); //PROTOTIPO RECURSIVA...


int main(){//INICIO PROGRAMA
    int numero1, numero2;
    cout<<"PRIMER NUMERO = ";
    cin>>numero1;
    cout<<"SEGUNDO NUMERO =  ";
    cin>>numero2;
    cout<<"Division Iterativa: "<<divisionIterativa(numero1, numero2) << endl;
    cout<<"Division Recursiva: "<<divisionRecursiva(numero1, numero2) << endl;
}//FIN PROGRAMA

long divisionIterativa(int numero1,int numero2){//INICIO DIVISION ITERATIVA
    int res=0;
    numero1=numero1-numero2;
    do{//INICIO DO
        res=res+1;
        numero1 =numero1-numero2;
    }//FIN DO
    while (numero1 >= 0);
    return res;
}//FIN DIVISION ITERATIVA

long divisionRecursiva(int numero1,int numero2){//INICIO DIVISION RECURSIVA
    if(numero2>numero1){//INICIO IF
        return 0;
    }//FIN IF
    else{//INICIO ELSE
        return divisionRecursiva(numero1-numero2,numero2)+1;
    }//FIN ELSE
}//FIN DIVISION RECURSIVA
