#include <stdio.h>

int longitud(char cadena[]);
int main(){
    char cad1[100], cad2[100];
    int tam1=0, tam2=0, iguales=0;
    printf("Valor de la cadena 1: \n");
    scanf("%s",&cad1);
    printf("Valor de la cadena 2: \n");
    scanf("%s",&cad2);

    tam1=longitud(cad1);
    tam2=longitud(cad2);
    if(tam1>tam2){
    printf("La cadena 1 tiene una longitud de %d y la cadena 2 de %d, por lo tanto la cadena 1 es mayor",tam1,tam2);
    }else{
    printf("La cadena 2 tiene una longitud de %d y la cadena 1 de %d, por lo tanto la cadena 2 es mayor",tam2,tam1);
    }
    return 0;
}

int longitud(char cadena[]){
    int tam=0;
    while(cadena[tam]>='\n'){
         tam++;
    }
    return tam;
}
