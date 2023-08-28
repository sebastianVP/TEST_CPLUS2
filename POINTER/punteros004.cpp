#include <iostream>

using namespace std;

int getMin(int numbers[],int size){
	int min= numbers[0];
        for(int i=1;i<size;i++){
	if(numbers[i]<min)
		min=numbers[i];
	}
	return min;
}


int getMax(int numbers[],int size){
	int max =numbers[0];
        for(int i=1; i<size;i++){
	if(numbers[i]>max)
	  max = numbers[i];
	}
        return max;
}


int main(){
        int numbers[5]={4,3,1,-9,19};
        int min = getMin(numbers,5);
        cout << "El valor minimo es: "<< min<<endl;
	int max = getMax(numbers,5);
        cout << "El vaor maximo es: " << max <<endl;

        return 0;
}
