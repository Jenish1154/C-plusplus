#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int t_s;
	int hours;
	int minutes;
	int seconds;
	
	cout<<"Enter time in seconds : ";
	cin>>t_s;
	cout<<endl;
	
	hours=t_s/3600;
	t_s=t_s%3600;
	minutes=hours/3600;
	hours=hours%3600;
	seconds=minutes/3600;
	
	cout<<"time is hh : mm : sec formate ";
	cout<<endl;
	cout<<endl;
	
	cout<<"time in hour =  "<<hours<<endl;
	cout<<"time in minutes = "<<minutes<<endl;
	cout<<"time in seconds = "<<seconds<<endl;
	
	return 0;
	
}
