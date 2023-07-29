#include<iostream>
#include<string.h>

using namespace std;

class Mother{
	
	public :

	char a[100]="Good Morning";
		
    void Display()
        {
		cout<<""<<a<<endl;
		}
};

class Daughter : public Mother{

	public :

	char b[100]="Good Night";

	void Display()
        {
		cout<<""<<a<<endl;
		}
};

int main(){
	
	Daughter d;
    
	d.Display();
    d.Display();
    
	return 0;
	
}