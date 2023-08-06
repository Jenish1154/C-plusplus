#include<iostream>
#include<string.h>

using namespace std;

class distance{
	
	public :
		
		int feet1;
		int feet2;
		int inches1;
		int inches2;
	
};

int main(){
	
	distance d;

        cout<<"Enter feet1 : ";
	    cin>>feet1;

		cout<<"Enter feet2 : ";
	    cin>>feet2;

		cout<<"Enter inches1 : ";
	    cin>>inches1;
		
		cout<<"Enter inches2 : ";
	    cin>>inches2;
	    
	    feet1=feet1/12;
	    feet1=feet1%12;
	    
	    feet2=feet2/12;
	    feet2=feet2/12;
	    
	    inches1=feet1-12;
	    inches2=feet2-12;
	    
  	
  	cout<<feet1<<endl;
	cout<<inches1<<endl;
	cout<<feet2<<endl;
	cout<<inches2<<endl;
	
	d.feet1;
	d.feet2;
	d.inches1;
	d.inches2;

	return 0;
	
}
