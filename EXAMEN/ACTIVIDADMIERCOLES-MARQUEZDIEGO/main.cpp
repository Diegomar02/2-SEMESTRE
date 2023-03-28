#include <iostream>
using namespace std;

//PROTOTIPOS
int invertir1(int num1=0);
int invertir2(int num2);
void asteriscos(int f);
void piramide(int num);
void regresar();

int main(){//INICIO DEL PROGRAMA
    int opcion;
    cout<<"MENU\n";
    cout<<"EJERCICIOS DEL EXAMEN\n";
    cout<<"1. SEPARAR UNA PALABRA\n";
    cout<<"2. INVERTIR UN NUMERO, VER SI ES PALÍNDROMO O NO\n";
    cout<<"3. PIRAMIDE CON ASTERISCOS\n";
    cout<<"¿CUAL OPCION QUIERES? = ";
    cin>>opcion;
    
    if (opcion==1){//INICIO IF OPCION 1
        int i,a=0;
        char palabra[a];
        cout<<"¿CUAL ES LA PALABRA? = ";
        cin>>palabra;
        for (i=0;i<palabra[a];i++){//INICIO FOR
            cout<<palabra[i];
            cout<<"\t";
            if (i>palabra[i]){//INICIO IF
                cout<<"\n";
                regresar();
                return 0;
            }//FIN IF
        }//FIN FOR
    }//FIN IF OPCION 1
    
    if (opcion==2){//INICIO IF OPCION 2
        int num1=0;
        cout<<"INTRODUCE EL NUMERO = ";
        cin>>num1;
        cout<<"Invertido = "<<invertir2(num1)<<endl;
        if (num1==invertir2(num1)){//INICIO IF
            cout<<"Es palindromo\n";
            regresar();
        }//FIN IF
        else{//INICIO ELSE
            cout<<"No es palindromo\n";
            regresar();
        }//FIN ELSE
        cout<<endl;
    }//FIN IF OPCION 2
    
    if (opcion==3){//INICIO IF OPCION 3
        int num;
        cout<<"TAMAÑO DE LA PIRAMIDE = ";
        cin>>num;
        piramide(num);
        regresar();
        return 0;
    }//FIN IF OPCION 3
    
}//FIN DEL PROGRAMA



//EJERCICIO 2
int invertir2(int num2){//INICIO INVERTIR2
    int inv=0;
    while(num2>0){//INICIO WHILE
        inv=inv * 10 + (num2 % 10);
        num2 = num2 / 10;
    }//FIN WHILE
    return inv;
}//FIN INVERTIR2


//EJERCICIO 3
void asteriscos(int f){//INICIO VOID ASTERISCOS
    int i;
    for(i=1;i<=f;i++)
    cout<<"*";
    cout<<endl;
}//FIN VOID ASTERISCOS
void piramide(int num){//INICIO VOID PIRAMIDE
    int i;
    for(i=1;i<=num;i++)
        asteriscos(i);
}//FIN VOID PIRAMIDE

void regresar(){//INICIO VOID REGRESAR
    cout<<"¿DESEA REGRESAR AL MENU? SI (S) O NO (N) = ";
    char regresar;
    cin>>regresar;
    if (regresar=='S'||regresar=='s'){//INICIO IF
        cout<<"\n";
        main();
    }//FIN IF
    else{//INICIO ELSE
    cout<<"\nGRACIAS!!\n";
    cout<<"ESPERO MI 100 JAJAJA\n";
    }//FIN ELSE
}//FIN VOID REGRESAR
