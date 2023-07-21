#include<iostream>
#include<string.h>

using namespace std;
 
int main()
{
    int t_s;
    int hour;
    int min;
    int sec;
 
    cout<<"Enter a time in seconds: ";
    cin>>t_s;
 
    hour = t_s/3600;
    t_s = t_s%3600;
    min = t_s/60;
    t_s = t_s%60;
    sec = t_s;
 
    cout<<"\nThe time in HH:MM:SS format is: "<<hour<<" hours, "<<min<<" minutes, "<<sec<<" seconds. ";
    
    return 0;
}