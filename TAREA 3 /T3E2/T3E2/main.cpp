// Diego Márquez Gomez
//ID 245119
//Ejercicio 2

#include <iostream>
#include <math.h>
#define VEC 2

using namespace std;

struct Punto{
    float coordenadaX;
    float coordenadaY;
    
};

// PROTOTIPOS...

void menu();
void Captura(Punto Coordenada[]);
void Mostar(Punto Coordenada[]);
void DistanciaxPunto(Punto Coordenada[]);
void PuntoMedio(Punto Coordenada[]);

int main(){//INICIO PROGRAMA
    menu();
}//FIN PROGRAMA

void menu(){//INICIO VOID MENU
    Punto Coordernada[VEC];
    int opc;
    do{//INICIO DO
        cout<<"\nCALCULADORA DE PUNTOS POR COORDENADAS\n"<<endl;
        cout<<"1. Captura de Puntos\n";
        cout<<"2. Muestra de Puntos\n";
        cout<<"3. Distancia entre Puntos\n";
        cout<<"4. Punto Medio\n";
        cout<<"5. Salir\n"<<endl;
        cout<<"¿Cual opcion desea? = ";
        cin>>opc;
        switch(opc){//INICIO SWITCH
            case 1:
                Captura(Coordernada); break;
            case 2:
                Mostar(Coordernada); break;
            case 3:
                DistanciaxPunto(Coordernada); break;
            case 4:
                PuntoMedio(Coordernada); break;
        }//FIN SWITCH
    }while(opc != 5);
}//FIN VOID MENU

void Captura(Punto Coordenada[]){//INICIO VOID CAPTURA
    cout << "\n";
    for(int i=0;i<VEC;i++){//INICIO FOR
        cout<<"Coordenada X = ";
        cin>>Coordenada[i].coordenadaX;
        cout<<"Coordenada Y = ";
        cin>>Coordenada[i].coordenadaY;
        cout<<"\n";
    }//FIN FOR
}//FIN VOID CAPTURA

void Mostar(Punto Coordenada[]){//INICIO VOID MOSTRAR
    cout << "\n";
    for(int i=0;i<VEC;i++){//INICIO FOR
        cout<<"Coordenada X = "<<Coordenada[i].coordenadaX<<endl;
        cout<<"Coordenada Y = "<<Coordenada[i].coordenadaY<<endl;
        cout<<"\n";
    }//FIN FOR
}//FIN VOID MOSTRAR

void DistanciaxPunto(Punto Coordenada[]){//INICIO VOID DISTANCIA
    float Distancia;
    float ResX;
    float ResY;
    ResX=(Coordenada[0].coordenadaX-Coordenada[1].coordenadaX);
    ResY=(Coordenada[0].coordenadaY-Coordenada[1].coordenadaX);
    Distancia=sqrt(pow(ResX,2)+pow(ResY,2));
    cout<<"La Distancia entre los puntos es = "<<Distancia<<endl;
}//FIN VOID DISTANCIA

void PuntoMedio(Punto Coordenada[]){//INICIO VOID PUNTO MEDIO
    float PuntoMedio;
    float SumX;
    float SumY;
    SumX=(Coordenada[0].coordenadaX+Coordenada[1].coordenadaX);
    SumY=(Coordenada[0].coordenadaY+Coordenada[1].coordenadaX);
    PuntoMedio=(SumX/2)+(SumY/2);
    cout<<"El Punto Medio entre los puntos es = "<<PuntoMedio<<endl;
}//FIN VOID PUNTO MEDIO

