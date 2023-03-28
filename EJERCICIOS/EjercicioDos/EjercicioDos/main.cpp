// EJERCICIO DOS
// DIEGO MÁRQUEZ GÓMEZ
// 245119
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
void captura(FILE*arch);

int main(){//INICIO PROGRAMA
    FILE*arch=NULL;
    if ((arch=fopen("letras.txt","r"))==NULL)
        arch=fopen("letras.txt","w");
    fclose(arch);
    captura(arch);
}//FIN PROGRAMA

void captura(FILE*arch){//INICIO VOID CAPTURA
    arch=fopen("letras.txt","ab+");
    char palabra[25],finaal[]="final";
    int a;
    do{//INICIO DOP
        cout<<"Frase: ";
        gets(palabra);
        a=strlen(palabra);
        if (strcmp(palabra,finaal)==0)
            break;
        for(int i=0;i<a;i++){//INICIO FOR
            fputc(palabra[i],arch);
            fputc('\t',arch);
        }//FIN FOR
        fputc('\n',arch);
    }//FIN DO
    while(strcmp(palabra,finaal)!=0);
    fclose(arch);
}//FIN VOID CAPTURA


