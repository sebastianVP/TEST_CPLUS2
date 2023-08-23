#include <iostream>
#include <thread>

void function1(char symbol){
        for(int i=0;i<200;i++)
           std::cout<<symbol;
}
void function2(){
        for(int i=0;i<200;i++)
           std::cout<<"-";
}

int main(){
        //function1();
        //function2();
        std::thread worker1(function1,'A');
        std::thread worker2(function2);
        //std::cout<<"Hola";
	//worker1.join();
	worker2.join();
        worker1.join();
        //system("pause>nul");
        return 0;
}
