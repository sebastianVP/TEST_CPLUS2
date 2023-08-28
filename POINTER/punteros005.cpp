#include <iostream>
using namespace std;
/*
DINAMIC ARRAYS
ARRAYS : TYPE OF  COLECTION THAT STORE ELEMENTS CONTINUOS MEMORY
*/
int main(){
	int myArray[5];
	// arreglo DINAMICO
        // two COMMANDS: new  y delete
	//DEFINIR EL SIZE Y LUEGO CREAR EL PUNTERO
	int size;
	cout<<"Input size: ";
        cin >> size;
        // int myArray[size]; esta linea genera ERROR
        int* myNewArray = new int[size]; //this new keyword has Allocated an array of this size that user has specify
        for(int i=0;i<size;i++){
           cout<<"Array["<< i<<"] ";
           cin >>myNewArray[i];
        }      
        for(int i=0;i<size;i++){
           //cout<<myNewArray[i]<<" ";           
           cout<<*(myNewArray +i)<<" ";
        }
        cout<<""<<endl;
        delete[]myNewArray;
        myNewArray = NULL;
        return 0;

}
