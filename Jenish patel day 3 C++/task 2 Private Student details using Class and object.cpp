#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	private:
	
	int id;
	char name[100];
	char j_p[100];
	char company[100];
	int contact;
		
};

int main(){
	
	Employee Emp;
	
/*

	Emp.id=2757;
	strcpy(Emp.name,"Jenish");
	strcpy(Emp.j_p,"assitant manager");
    strcpy(Emp.company,"HK Exports");	
    Emp.contact=511;

*/    

    Emp.id;
	Emp.name;
	Emp.j_p;
    Emp.company;	
    Emp.contact;
    
    cout<<"Enter Id : ";
	cin>>Emp.id;
    
    cout<<"Enter Employee's name : ";
	cin>>Emp.name;   
    
    cout<<"Enter Employee's Job profile : ";
	cin>>Emp.j_p;

	cout<<"Enter company's name : ";
	cin>>Emp.company;
		
	cout<<"Enter Contact : ";
	cin>>Emp.contact;
	
	cout<<endl;
	
	cout<<"Output is..."<<endl;
	cout<<endl;
	
	
    cout<<"Employee's ID = "<<Emp.id<<endl;
    cout<<"Employee's Name = "<<Emp.name<<endl;
    cout<<"Employee's job profile = "<<Emp.j_p<<endl;
    cout<<"Company's name = "<<Emp.company<<endl;
    cout<<"Employee's contact details = "<<Emp.contact<<endl;	
	
	return 0;
	
}