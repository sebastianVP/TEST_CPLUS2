#include <iostream>
using namespace std;
/*
- La idea de encapsulamiento es hacer ciertos atributos y metodos privados, y establecer metodos que permitan acceder a ellos como los setter y getter.
- Abstraccion: Es como el boton que presionamos desde nuestro telefono inteligente, nos preocupamos solamente de la abstraccion.
- Herencia: Existe esta superclase o clase principal y luego hay una clase secundaria conocida como  subclase, tiene sus atributos y propiedades pero esta subclase  puede tener sus propios 
  atributos y mientros que son especificos para esa clase que la base no tiene.
- public: atributos son accesibles desde afuera de la clase
- private: atributos no pueden ser accesible desde afuera de la clase.
- protected: atributos no puede ser accedido desde afuera de la clase, sin embargo, pueden ser accedidos por clases heredadas.
- Crear un constructor para llamar a este metodo de manera automatica cuando creemos una clase, su mision siempre es inicializar el objeto y establecer sus propiedades y valores predeterminados.
- El uso mas comun de polimorfismo es cuando  una clase padre es usada como referencia para  un objeto clase hijo.
- La funcion virtual lo que hace es consulta si hay una implementacion del metodo en las clases derivadas y si es afirmativo se ejecuta.
*/

class AbstractEmployee{
	virtual void AskForPromotion()=0;
	//metodo se convierte en obligatorio con virtual
};

class Employee:AbstractEmployee{
private:
  //string Name;
  string Company;
  int Age;
protected:
  string Name;
public:
  void setName(string name){//settet
  	Name =name;
  } 
  string getName(){//getter
	return  Name;
  } 
  void setCompany(string company){
	Company= company;
	}
  string getCompany(){
	return Company;
	}
  void setAge(int age){
        if(age>18)
	Age=age;
	}
  int getAge(){
	return Age;
	}
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
  void AskForPromotion(){
  	if (Age>30)
		cout<<Name <<" got promoted!"<<endl;
	else
		cout<<Name <<", sorry NO promotion for you!"<<endl;
  }
  virtual void Work(){
	cout<< Name<< " is checking email,task backlog, performing tasks...";
  }
// crearemos dentro de puplic el constructor Employee
};

class Developer:public Employee{
public:
   string FavProgrammingLanguage;
   Developer(string name,string company,int age,string favProgrammingLanguage):Employee(name,company,age)
	{
	FavProgrammingLanguage = favProgrammingLanguage;
	}
   void FixBug(){
	//cout<< getName()<<" fix bug using "<<FavProgrammingLanguage <<endl;
	cout<<Name<<" fix bug using "<<FavProgrammingLanguage<<endl;
        }
   void Work(){
	cout<<Name<<" is writin "<<FavProgrammingLanguage<<" code."<<endl;
   }
};

class Teacher:public Employee{
public:
	string Subject;
	Teacher(string name,string company,int age, string subject):Employee(name,company,age){
		Subject= subject;
	}
	void PrepareLesson(){
		cout<<Name<< " is preparing "<<Subject<<" lesson "<<endl;
	}
        void Work(){
	cout <<Name<< " is teaching "<< Subject<<endl;
	}
};



int main(){
cout <<"Hello World\n";

Employee employee1 = Employee("Wendy","Imagine-NY",30);
/*employee1.Name   = "Wendy";
employee1.Company= "Imagine-NY";
employee1.Age    = 30;*/
//employee1.IntroduceYourself();

Employee employee2 =  Employee("Alex","SSB",33);
/*employee2.Name = "Alex";
employee2.Company = "SSB";
employee2.Age     =33;*/
//employee2.IntroduceYourself();

//employee1.setAge(39);
//cout<<employee1.getName()<< " is "<<employee1.getAge()<<" years old"<<endl;}

employee1.AskForPromotion();
employee2.AskForPromotion();
Developer d = Developer("Maria","Yndra",18,"C++");
d.FixBug();
d.AskForPromotion();
Teacher t = Teacher("Jack","EL Carmelo",40,"Programming");
t.PrepareLesson();
t.AskForPromotion();
Employee* e1= &d;
Employee* e2= &t;
e1->Work();
e2->Work();

}
