#include<iostream>
#include<string.h>

using namespace std;

class Animal{
	
	public :
	
	char name[100];
	int age;
	
	void set(){
	
	cout<<"enter name ="<<name<<endl;
    cout<<"enter age ="<<age<<endl;
	
	}
};

	class Zebra : public Animal{
	
	public :
	
	char name[100];
	int age;
	char p_o[100];
	
    void setvalue(){
	
	cout<<"Zebra"<<endl;
	cout<<endl;
			
	cout<<"enter name =";		
	cin>>name;

	cout<<"enter age =";
	cin>>age;

	cout<<"enter place of origin =";
	cin>>p_o;

	cout<<endl;
    
	}
    
	void getvalue(){
		
		cout<<"Output is ..."<<endl;
		cout<<endl;
		
		cout<<"enter name ="<<name<<endl;
		cout<<"enter age ="<<age<<endl;
		cout<<"enter place of origin ="<<p_o<<endl;
		
		cout<<endl;
		
	}
};
    
	class Dolphin : public Animal{
	
	public :
	
	char name[100];
	int age;
	char p_o[100];
	
    void setdata(){
	
	cout<<"dolphin"<<endl;
	cout<<endl;
			
	cout<<"enter name =";		
	cin>>name;

	cout<<"enter age =";
	cin>>age;

	cout<<"enter place of origin =";
	cin>>p_o;

	cout<<endl;
    
	}
    
	void getdata(){
		
		cout<<"Output is ..."<<endl;
		cout<<endl;	
		
		cout<<"enter name ="<<name<<endl;
		cout<<"enter age ="<<age<<endl;
		cout<<"enter place of origin ="<<p_o<<endl;
		
		cout<<endl;
		
	}
};

int main(){
	
	Zebra ze;

    ze.setvalue();
        ze.getvalue();

    Dolphin de;
    
	de.setdata();
        de.getdata();
          
	cout<<endl;
	
	return 0;
}