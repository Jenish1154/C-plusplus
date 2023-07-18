#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char a[20],i;

	cout<<"Enter name : ";
	cin>>a; 
	cout<<"\n"   /* std::endl use karta no aavydu atle ("\n") use karyu chhe */

	for(i=0; i<=strlen(a); i++)
	{
		if(a[i]>='a' && a[i]<='z') 
		{
		a[i]-=32;
		} 
		else if(a[i]>='A' && a[i]<='Z') 
		{
	    a[i]+=32;
		}
	}
	
	cout<<"output in Toggle case is : "<<a;

	return 0;

}
