#include<iostream>

using namespace std;

int main()
{
	char ch;
	
	cout<<"Enter a character :";
	cin>>ch;
	cout<<"\n";
	
	if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch== 'O' || ch=='U'){
	cout << "Character is Vowel";
	}
	
    else
	{
    cout<<"Character is Consonant";
    cout<<"\n";
    }
   
return 0;

}