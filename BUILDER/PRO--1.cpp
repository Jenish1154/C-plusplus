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
		
		cout<<"enter employee's id =";
		cin>>id;
		
		cout<<"enter employee's name =";
		cin>>name;
		
		cout<<"enter employee's job profile =";
		cin>>j_p;
		
		cout<<"enter employee's salary =";
		cin>>salary;
		
		cout<<"enter experience =";
		cin>>experience;
		
		cout<<"enter address =";
		cin>>address;
		
		cout<<"enter employee's email address =";
		cin>>e_a;
		
		cout<<"enter contact =";
		cin>>contact;
	
	    cout<<endl;
	
	}
	void getdata(){
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
	
	Employee em1,em2,em3,em4,em5;
	
	em1.setdata();
	em1.getdata();
	em2.setdata();
	em2.getdata();
	em3.setdata();
	em3.getdata();
	em4.setdata();
	em4.getdata();
	em5.setdata();
	em5.getdata();
	
	cout<<endl;
	
	return 0;
}