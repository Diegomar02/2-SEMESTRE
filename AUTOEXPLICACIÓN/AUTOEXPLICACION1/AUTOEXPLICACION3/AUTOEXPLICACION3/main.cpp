#include <stdio.h>

int tam(char cadena[]);

int main() {
     char cad1[100], cad2[100];
     int tam1=0, tam2=0, iguales=0;
     printf("Valor de la cadena 1: \n");
     scanf("%s",cad1);
     printf("Valor de la cadena 2: \n");
     scanf("%s",cad2);

     tam1=tam(cad1);
     tam2=tam(cad2);
     if (tam1 != tam2){
        printf("Las cadenas 1 y 2 son distintas... \n");
     }else{
           for(int i=0; i<tam1; i++){
                if (cad1[tam1] == cad2[tam2]){
                    iguales++;
                }
            }
      if (iguales == tam1){
          printf("Las cadenas 1 y 2 son iguales... \n");
      }
    }
   return 0;
}
int tam(char cadena[]){
      int tam=0;
      for(int i=0;cadena[i];i++){
            tam++;
      }
      return tam;
}
