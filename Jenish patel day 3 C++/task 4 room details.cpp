#include<iostream>
#include<string.h>

using namespace std;

class Room{
	
	public:
	
	char housename[100];
	char address[100];
	char city[100];
	int floors;
};

int main(){
	
	Room rm;
    
    rm.housename;
	rm.address;
	rm.city;
    rm.floors;	
    
    cout<<"Enter name of house : ";
	cin>>rm.housename;
    
    cout<<"Enter address : ";
	cin>>rm.address;   
    
    cout<<"Enter city : ";
	cin>>rm.city;

	cout<<"Enter floor : ";
	cin>>rm.floors;
	
	cout<<endl;
	
	cout<<"Output is..."<<endl;
	cout<<endl;
	
	
    cout<<"House name is = "<<rm.housename<<endl;
    cout<<"address of the house is  = "<<rm.address<<endl;
    cout<<"city name = "<<rm.city<<endl;
    cout<<"in which floor = "<<rm.floors<<endl;

	return 0;
	
}