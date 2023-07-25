#include<iostream>
#include<string.h>

using namespace std;


class Highschool{
	
	int id;
	char studentname[100];
	char studentrollno[100];
	int studentstandard;
	int studentage;
	char studentcontact[10];
	static char studenteducationinstitutename[100];
	char studentaddress[100];

	public :
	
	void setdata(){

        cout<<"----HIGH SCHOOL----"; 
        cout<<endl;
        cout<<endl;
        
		cout<<"enter id =";
		cin>>id;

		cout<<"enter student name =";
		cin>>studentname;

		cout<<"enter student roll no =";
		cin>>studentrollno;

		cout<<"enter student standard =";
		cin>>studentstandard;

		cout<<"enter student age =";
		cin>>studentage;

		cout<<"enter student contact =";
		cin>>studentcontact;

		cout<<"enter address =";
		cin>>studentaddress;
		
		cout<<endl;
	
	}
	void getdata(){
		
		cout<<"enter id ="<<id<<endl;
		cout<<"enter student name ="<<studentname<<endl;
		cout<<"enter student roll no ="<< studentrollno<<endl;
		cout<<"enter student standard ="<<studentstandard<<endl;
		cout<<"enter student age ="<<studentage<<endl;
		cout<<"enter student contact ="<<studentcontact<<endl;
		cout<<"enter student education institute name ="<<studenteducationinstitutename<<endl;
		cout<<"enter student address ="<<studentaddress<<endl;
	
	    cout<<endl; 
	
	}
};

char Highschool::studenteducationinstitutename[100]="SPG";

class college{
	
	int id;
	char studentname[100];
	char studentrollno[100];
	int studentstandard;
	int studentage;
	char studentcontact[10];
	static char studenteducationinstitutename[100];
	char studentaddress[100];
	
	public :
	
	
    void setdata(){
    	
    	cout<<"----COLLEGE----"; 
        cout<<endl;
        cout<<endl;
    	
		cout<<"enter id =";
		cin>>id;

		cout<<"enter student name =";
		cin>>studentname;

		cout<<"enter student roll no =";
		cin>>studentrollno;

		cout<<"enter student standard =";
		cin>>studentstandard;

		cout<<"enter student age =";
		cin>>studentage;

		cout<<"enter student contact =";
		cin>>studentcontact;

		cout<<"enter address =";
		cin>>studentaddress;
	
	    cout<<endl;
	
	}
	void getdata(){
		
		cout<<"enter id ="<<id<<endl;
		cout<<"enter student name ="<<studentname<<endl;
		cout<<"enter student roll no ="<< studentrollno<<endl;
		cout<<"enter student standard ="<<studentstandard<<endl;
		cout<<"enter student age ="<<studentage<<endl;
		cout<<"enter student contact ="<<studentcontact<<endl;
		cout<<"enter student education institute name ="<<studenteducationinstitutename<<endl;
		cout<<"enter student address ="<<studentaddress<<endl;
		
		cout<<endl;
		
	}
	
};

char college::studenteducationinstitutename[100]="IIM A";

int main(){
	
	Highschool hi;
	
	hi.setdata();
	hi.getdata();
	
	college cl;
	
	cl.setdata();
	cl.getdata();
	
	return 0;
	
}