#include <iostream>

using namespace std;
int main(){
    int myNumbers[6]={1,2,3,4,5,6};
    cout<<myNumbers<<endl;// esto es la direccion del primero arreglo
    cout<<&myNumbers[0]<<endl;//direccion del primer arreglo
    cout<<myNumbers[2]<<endl; //valor de la posicion 0  1 2 , 3ra posicion
    cout<<*(myNumbers+2)<<endl;//mismo comportamiento que linea anterior
    cout<<"\n\n"<<endl;
    int luckyNumbers[5];
    for(int i=0;i<=4;i++){
	cout<<"Number: ";
        cin>> luckyNumbers[i];
    }
    for(int i=0;i<=4;i++){
       cout<<*(luckyNumbers+i)<<" ";
    }
    cout<<""<<endl;
    return 0;

}
