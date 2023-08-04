#include<iostream>
#include<string.h>

using namespace std;

class India{
	
	public :
		
		void Raj(){
			
			cout<<"Raj completed his bachelor's in India"<<endl;
			
		}
	
};

class UK : public India{
	
	public :
		
		void Raj(){
			
			cout<<"Raj will pursue his master's  in UK "<<endl;
			
		}
	
};


int main(){
	
	UK u1;
	
	u1. India :: Raj();
	u1.Raj();
	
	return 0;
	
}