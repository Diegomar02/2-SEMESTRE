// EJERCICIO UNO
// DIEGO MÁRQUEZ GÓMEZ
// 245119

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
void grabarPalabras();

int main(){//INICIO PROGRAMA
    grabarPalabras();
}//FIN PROGRAMA

void grabarPalabras(){//INICIO VOID GRABARPALABRAS
    FILE*arch;
    char palabra[20], final[]="fin";
    int a=1,tamañoPalabra=0;
    if((arch=fopen("frases.txt","a"))==NULL)
        arch=fopen("frases.txt","w");
    do{//INICIO DO
        cout<<"INTRODUCE LA PALABRA = ";
        cin>>palabra;
        tamañoPalabra=strlen(palabra);
        if(strcmp(palabra,final)==0)
           break;
        fprintf(arch,"%s\t%d\n",palabra,tamañoPalabra);
    }//FIN DO
    while(strcmp(palabra,final)!=0);
    fclose(arch);
}//FIN VOID GRABARPALABRAS
