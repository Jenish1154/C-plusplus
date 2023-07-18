#include<iostream>

using namespace std;

int main()
{
	
	char value ;

	cout<<"Enter value : ";
	cin>>value;
	cout<<"\n";
		
	if(value>='A' && value<='z'){
    cout<<"value is character";
	cout<<"\n";
	}
    
	else if(value >= '0' && value <= '9'){
	cout<<"value is digit";
	cout<<"\n";
	}
    
	else{
	cout<<"value is Special character";	
	cout<<"\n";
	}
	
    return 0;
}
