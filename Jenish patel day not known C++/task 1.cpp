#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	public :
	
	int id;
	char name[100];
	char j_p[100];
	int salary;
	int experience;
	char address[100];
	char e_a[100];
	char contact[10];
	
	
	void setdata(){
		
		cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter job profile ="<<j_p<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter experience ="<<experience<<endl;
		cout<<"enter address ="<<address<<endl;
		cout<<"enter email ="<<e_a<<endl;
		cout<<"enter contact="<<contact<<endl;
		
		cout<<endl;
		
	}
};

	class Employee2{
	
	public :
	
	int id;
	char name[100];
	char j_p[100];
	int salary;
	int experience;
	char address[100];
	char e_a[100];
	char contact[10];
		
    
	void sawdata(){
		
		cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter job profile ="<<j_p<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter experience ="<<experience<<endl;
		cout<<"enter address ="<<address<<endl;
		cout<<"enter email ="<<e_a<<endl;
		cout<<"enter contact="<<contact<<endl;
		
		cout<<endl;
		
	}
};
 
    class Employee3 : public Employee, public Employee2{
	
	public :
	
	int id;
	char name[100];
	char j_p[100];
	int salary;
	int experience;
	char address[100];
	char e_a[100];
	char contact[10];

	
	void printdata(){
		
		cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter job profile ="<<j_p<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter experience ="<<experience<<endl;
		cout<<"enter address ="<<address<<endl;
		cout<<"enter email ="<<e_a<<endl;
		cout<<"enter contact="<<contact<<endl;
		
		cout<<endl;
		
	}
	
};

int main(){
	
	Employee3 em3;

    em3.setdata();
	em3.sawdata();
	em3.printdata();

	cout<<endl;
	
	return 0;
}