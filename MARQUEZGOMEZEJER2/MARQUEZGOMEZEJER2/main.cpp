//  EJERCICIO 2
//  ID = 245119
//  DIEGO MÁRQUEZ GÓMEZ
//  FECHA DE ENTREGA = 15 DE FEBRERO DEL 2021 A LAS 11 DE LA NOCHE
//  GRUPO= 2C

#include <iostream>
#include <string.h>

using namespace std;

void verificador(char*, char*); //PROTOTICO

int main(){//INICIO DEL PROGRAMA
    char contraseña1[50];//TAMAÑO DE LA CONTRASEÑA 1
    char contraseña2[50];//TAMAÑO DE LA CONTRASEÑA 2
    cout<<"Contrasena nueva (50 caracteres) = ";
    cin.getline(contraseña1,100,'\n');
    cout<<"Ingresar contrasena = ";
    cin.getline(contraseña2,100,'\n');
    verificador(contraseña1,contraseña2);
    return 0;
}//FIN DEL PROGRAMA

//PROTOTICO
void verificador(char pass1[], char pass2[]){//INICIO VOID VERIFICAR
    if(strcmp (pass1,pass2)==0){//INICIO IF
        cout<<"La contrasena es Correcta...";
        cout<<"\n";
    }//FIN IF
    else{//INCIO ELSE
        cout<<"La contrasena es Incorrecta...";
        cout<<"\n";
    }//FIN ELSE
}//FIN VOID VERIFICADOR


