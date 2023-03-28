//  EJERCICIO 1
//  ID = 245119
//  DIEGO MÁRQUEZ GÓMEZ
//  FECHA DE ENTREGA = 15 DE FEBRERO DEL 2021 A LAS 11 DE LA NOCHE
//  GRUPO= 2C

#include <iostream>

using namespace std;


void opcionseleccionada(char&); //PROTOTIPO


int main(){//INICIO PROGRAMA
    char opcion;
    cout << "¿OPCION DESEADA?: "<<endl;
    cout << "\nA) Captura"<<endl;
    cout << "B) Calcular"<<endl;
    cout << "C) Mostrar"<<endl;
    cout << "D) Salir"<<endl;
    cout << "E) Ayuda"<<endl;
    cout << "\nøQue quiere hacer?: "<<endl;
    cin >>opcion;
    opcionseleccionada(opcion); //Llamada a la Funcion.
    return 0;
}//FIN DEL PROGRAMA

//PROTOTIPO
void opcionseleccionada(char& opcion){//INCIO VOID
    switch(opcion){
        case 'a':
        case 'A':  cout <<"Usted ha seleccionado la opcion : Capturar"<< endl;
                   break;
        case 'b':
        case 'B':  cout <<"Usted ha seleccionado la opcion : Calcular"<< endl;
                   break;
        case 'c':
        case 'C':  cout <<"Usted ha seleccionado la opcion : Mostrar"<< endl;
                   break;
        case 'd':
        case 'D':  cout <<"Opcion : Salir" << endl;
                   cout <<"Hasta Pronto..." << endl;
                   break;
        case 'e':
        case 'E':  cout <<"Opcion : Ayuda" << endl;
                   cout <<"\n- Para poder usar el Programa: "<< endl;
                   cout <<"Seleccione alguna opcion disponible, digite la letra correspondiente."<< endl;
                   break;
    }
}//FIN DEL VOID
