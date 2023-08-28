/*
-void pointers,

pointer hold an address of the variable of the same type.
there is an excpetion call void pointers 
the contain the address of any type float int char. 

*/

#include <iostream>
using namespace std;

void printNumber(int* numberPtr){
	cout << *numberPtr <<endl;
}

void printLetter(char* charPtr){
	cout<<*charPtr<<endl;
}

void print(void* ptr,char type){
     switch(type){
	case 'i':cout<<*((int*)ptr)<<endl;break;// handle int*
	
	case 'c':cout<<*((char*)ptr)<<endl;break;// handle char*
}
}

int main(){
	int number=5;
	//printNumber(&number);
	char letter='a';
        //printLetter(&letter);
        print(&number,'i');
        print(&letter,'c');
	return 0;
}
