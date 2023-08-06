#include<iostream>
#include<string.h>

using namespace std;

class Hotel{
	
public :
	
	int id;
    char name[100];
    char type[100];
	int staff_size;
	int room_size;
	int establish_year;
	char address[100];
	char rating_type[100];
	char website;
	
	void setter(){
		
	cout<<"enter id : ";
	cin>>id;
	
	cout<<"enter name : ";
	cin>>name;
	
	cout<<"enter type : ";
	cin>>type;
	
	cout<<"enter staff size : ";
	cin>>staff_size;
	
	cout<<"enter room size : ";
	cin>>room_size;

	cout<<"enter establish year : ";
	cin>>establish_year;
	
	cout<<"enter address : ";
	cin>>address;
	
	cout<<"enter rating type : ";
	cin>>rating_type;
	
	cout<<"enter website : ";
	cin>>website;	
	
	cout<<endl;
	
		
	}
	
	void getter(){
		
	cout<<"enter id : "<<id;
	cout<<endl;
	
	cout<<"enter name : "<<name;
	cout<<endl;
	
	cout<<"enter type : "<<type;
	cout<<endl;
	
	cout<<"enter staff size : "<<staff_size;
	cout<<endl;
	
	cout<<"enter room size : "<<room_size;
	cout<<endl;
	
	cout<<"enter establish year : "<<establish_year;
	cout<<endl;
		
	cout<<"enter address : "<<address;
	cout<<endl;
		
	cout<<"enter rating type : "<<rating_type;
	cout<<endl;
		
	cout<<"enter website : "<<website;
	cout<<endl;
		
	}

};
	
int main(){
	
Hotel h;
	
    h.setter();
    h.getter();
  
return 0;
}

