//DIEGO MARQUEZ GOMEZ
//245119
// 14/05/2021

#include <iostream>
using namespace std;

int main(){
   int vec [100];   // Declaracion de vector entero 100 numeros
   int *ptr, *p;    // Declaracion de punteros
   
   ptr = &vec[0];   // El puntero tiene la primera posicion del arreglo
   *ptr = 33;       // El puntero amacena el valor 33
   *(ptr+1) = 44;   // El puntero amacena el valor 44
   *(ptr+2) = 90;   // El puntero amacena el valor 90
   
   cout << vec[0] << "\t" << vec[1] << "\t" << vec[2] << endl;  // Mostrar en pantalla las 3 valor antes puestos (33,44,90).
   
   ptr+=10;         // El puntero se ira sumando de 10 en 10
   *(ptr+10) = 100; // El puntero almacena el valor 100
   
   int vecA[10]={1,2,3,4,5,6,7,8,9,10};
   int suma = 0;
   
   
   for(int i=0; i<10; ++i){ // Muestra el arreglo vecA[i]
       cout << vecA[i] << "\t";
   }
   cout << endl;
   
   
   
   suma=0;
   for(int i=0; i<10; i++){ // Muestra el arreglo vecA+i
       cout << *(vecA+i) << "\t";
   }
   cout << endl;
   
   suma=0;
   
   p = vecA;
   
   for(int i=0;  i < 10; i++){ // Muestra el arreglo p[i]
       cout << p[i] << "\t";
   }
   cout << endl;
   
   suma=0;
  
   p = vecA;
   
   for(p=vecA; p < &vecA[10]; p++){ // Muestra el arreglo *p
       cout << *p << "\t";
   }
   cout << endl;
}
