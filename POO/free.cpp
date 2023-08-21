#include <iostream>
using namespace std;

class Employee{
public:
  string Name;
  string Company;
  int Age;
  void IntroduceYourself(){
	cout<< "Name - "<<Name<<endl;
        cout<< "Company-"<<Company<<endl;
	cout<< "Age-"<<Age<<endl;
	}
  Employee(string name, string company,int age){
       Name    = name;
       Company = company;
       Age     = age;
  }
// crearemos dentro de puplic el constructor Employee
};

int main(){
cout <<"Hello World\n";

Employee employee1 = Employee("Wendy","Imagine-NY",30);
/*employee1.Name   = "Wendy";
employee1.Company= "Imagine-NY";
employee1.Age    = 30;*/
employee1.IntroduceYourself();

Employee  employee2("Alex","SSB",33);
/*employee2.Name = "Alex";
employee2.Company = "SSB";
employee2.Age     =33;*/
employee2.IntroduceYourself();


}
