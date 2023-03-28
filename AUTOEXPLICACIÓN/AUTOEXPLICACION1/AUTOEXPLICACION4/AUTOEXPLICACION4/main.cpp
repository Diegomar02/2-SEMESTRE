#include <stdio.h>
int main(){
    int tam1=0;
    char cad1[100], cad2[100];
    printf("Valor de la cadena 1: \n");
    scanf("%s",cad1);

    for(int i=0; cad1[i]!='\0'; i++){
        tam1++;
    }
    for(int i=0;i<100;i++){
        cad2[tam1-1]=cad1[i];
        tam1--;
    }
    printf("La cadena invertida es %s",cad2);
}
