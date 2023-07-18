#include<iostream>

using namespace std;

int main()
{
    int i=2000;
	int n=3000; 
   	
    for(i=2000; i<=n; i++)
    {
	 if(i%4 == 0)
     {
	  cout<<"is leap year : "<<i;
	  cout<<"\n";
	 }
    }
	
	return 0;
}