#include<iostream>
#include<string.h>

using namespace std;

class EmployeeA{
	
public :
	
	int id;
    char name[100];
    char role[100];
	int salray;
	int exp;
	char company_name[100];
	char address[100];
	char email[100];
	int contact;
	
	void setter(){
		
	cout<<"enter id : ";
	cin>>id;
	
	cout<<"enter name : ";
	cin>>name;
	
	cout<<"enter role : ";
	cin>>role;
	
	cout<<endl;
	
    }
	
};

class EmployeeB : public EmployeeA{
	
public :
	
	int id;
    char name[100];
    char role[100];
	int salary;
	int exp;
	char company_name[100];
	char address[100];
	char email[100];
	int contact;
	
	void setter(){
	
	cout<<"enter salary : ";
	cin>>salary;
	
	cout<<"enter experience : ";
	cin>>exp;
	
	cout<<endl;
    
	}
	
};

class EmployeeC : public EmployeeB{
	
public :
	
	int id;
    char name[100];
    char role[100];
	int salray;
	int exp;
	char company_name[100];
	char address[100];
	char email[100];
	int contact;
	
	void setter(){
		
    cout<<"enter companmy name : ";
	cin>>company_name;
	
	cout<<"enter address : ";
	cin>>address;
	
	cout<<endl;
    
	}
	
	void getter(){
		
	cout<<"enter name : "<<name;
	cout<<endl;
	
	cout<<"enter role : "<<role;
	cout<<endl;
	
	cout<<"enter salary : "<<salary;
	cout<<endl;
    
	}
	
};

class EmployeeD : public EmployeeC{
	
public :
	
	int id;
    char name[100];
    char role[100];
	int salary;
	int exp;
	char company_name[100];
	char address[100];
	char email[100];
	int contact;
	
	void setter(){
		
	cout<<"enter email : ";
	cin>>email;
	
	cout<<"enter contact : ";
	cin>>contact;
	
	cout<<endl;
    
	}
	
	void getter(){
		
	cout<<"enter id : "<<id;
	cout<<endl;
	
	cout<<"enter name : "<<name;
	cout<<endl;
	
	cout<<"enter role : "<<role;
	cout<<endl;
	
	cout<<"enter salary : "<<salary;
	cout<<endl;
	
	cout<<"enter experience : "<<exp;
	cout<<endl;
	
	cout<<"enter company name : "<<company_name;
	cout<<endl;
		
	cout<<"enter address : "<<address;
	cout<<endl;
		
	cout<<"enter email : "<<email;
	cout<<endl;
		
	cout<<"enter contcat : "<<contact;
	cout<<endl;
		
	}
	
};
	
int main(){
	
EmployeeD d;

d.EmployeeA::setter();

d.EmployeeB::setter();

d.EmployeeC::setter();

d.EmployeeC::getter();

d.EmployeeD::setter();

d.EmployeeD::getter();

return 0;
}

