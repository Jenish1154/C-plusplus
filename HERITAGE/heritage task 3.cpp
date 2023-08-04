#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	public :
	
	int id;
	char name[100];
	char role[100];
	int salary;
	char company[100];
	char contact[10];
	
	void set(){
			
		cout<<"Employee 1 data"<<endl;
		cout<<endl;
			
		cout<<"enter id =";
		cin>>id;
		
		cout<<"enter name =";
		cin>>name;
		
		cout<<"enter job role =";
		cin>>role;

	    cout<<"enter salary =";
	    cin>>salary;
	    
	    cout<<"enter company =";
	    cin>>company;
	    
	    cout<<"contact = ";
		cin>>contact;
        
		cout<<endl;
		
	}
	
	void setValue(){
				
		cout<<"Employee 1 output"<<endl;		
		cout<<endl;
				
	    cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter role ="<<role<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter company ="<<company<<endl;
		cout<<"enter contact ="<<contact<<endl;
	
		cout<<endl;
	
	}
	
};

class Employee2{
	
	public :
	
	int id;
	char name[100];
	char role[100];
	int salary;
	char company[100];
	char contact[10];
	
	void get(){
		
		cout<<"Employee 2 data"<<endl;
		cout<<endl;
			
		cout<<"enter id =";
		cin>>id;
		
		cout<<"enter name =";
		cin>>name;
		
		cout<<"enter job role =";
		cin>>role;

	    cout<<"enter salary =";
	    cin>>salary;
	    
	    cout<<"enter company =";
	    cin>>company;
	    
	    cout<<"contact =";
		cin>>contact;
        
		cout<<endl;
		
	}
	
	void getValue(){
			
		cout<<"Employee 2 output"<<endl;
		cout<<endl;	
			
	    cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter role ="<<role<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter company ="<<company<<endl;
		cout<<"enter contact ="<<contact<<endl;
	
		cout<<endl;
	
	}
	
};

class Employee3 : public Employee, public Employee2{
	
	public :
	
	int id;
	char name[100];
	char role[100];
	int salary;
	char company[100];
	char contact[10];
	
	void show(){
			
	    cout<<"Employee 3 data"<<endl;
		cout<<endl;
			
		cout<<"enter id =";
		cin>>id;
		
		cout<<"enter name =";
		cin>>name;
		
		cout<<"enter job role =";
		cin>>role;

	    cout<<"enter salary =";
	    cin>>salary;
	    
	    cout<<"enter company =";
	    cin>>company;
	    
	    cout<<"contact =";
		cin>>contact;
        
		cout<<endl;
		
	}
	
	void showValue(){
			
		cout<<"Employee 3 output"<<endl;	
		cout<<endl;
			
	    cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter role ="<<role<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter company ="<<company<<endl;
		cout<<"enter contact ="<<contact<<endl;
		
    	cout<<endl;
	
	}
	
};

int main(){
	
	Employee3 e;
	
	e.set();
	e.setValue();
	e.get();
	e.getValue();
	e.show();
	e.showValue();
	
	return 0;
	
}