#include <iostream>

using namespace std;
/*
how command line arguments are passed to main() in C and C++
PUNTEROS:
- Punteros almacenan una direccion, una direccion de memoria.
- Si yo declaro el puntero

int* ptr;
*ptr =9;
Sale error porque no he asignado al puntero primero una direccion de memoria.

Usar punteros luego como valores de referencia hacia una funcion.
Usa punteros con arrays
Usa punteros con arrays dinamicos.
*/
int main(int argc,char** argv){
      cout<<"Have "<<argc<<" arguments:"<<endl;
      for(int i=0;i<argc;++i)
         cout<<argv[i]<<endl;

      int n=6;
      cout<< n << endl;
      cout<<&n << endl;
      int* ptr=&n;
      cout << ptr <<endl;
      cout <<*ptr<<endl;
      *ptr = 10;
      cout<<*ptr<<endl;
      int v;
      int* ptr2 = &v;
      *ptr2 = 9;
      cout<<"v: "<<v<<endl;
      return 1;
}
