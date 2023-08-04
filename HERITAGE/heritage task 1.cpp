#include<iostream>
#include<string.h>

using namespace std;

class Mother{
	
	public :
		
    void Display()
        {
		cout<<"Good Morning"<<endl;
    	}
};

class Daughter : public Mother{

	public :
		
		void Display()
        {
        	char b[100]="Good night";
        	
		    cout<<b<<endl;
		}
};

int main(){
	
	Daughter d;
  
    d.Mother::Display();
	d.Display();  
	
	return 0;
	
}