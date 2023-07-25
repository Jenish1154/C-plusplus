#include<iostream>
#include<string.h>

using namespace std;

class india{
	
	public :
	
	static char states[100];
	
	char h_s[100];
	char r_s[100];
	char s_s[100];
	char e_s[100];
	
	void setdata(){
		
		cout<<"enter heritagestates name =";
		cin>>h_s;
		
		cout<<"enter richstates name =";
		cin>>r_s;
		
		cout<<"enter safestates name =";
		cin>>s_s;
		
		cout<<"enter educatedstates names =";
		cin>>e_s;
		
        cout<<endl;
		
	}
	void getdata(){

		cout<<"states"<<states<<endl;
		cout<<"heritagestates name ="<<h_s<<endl;
		cout<<"richstates name ="<<r_s<<endl;
		cout<<"safestates name ="<<s_s<<endl;
		cout<<"educatedstates name ="<<e_s<<endl;
		
		cout<<endl;
		
	}
};

char india::states[100]="=29";

int main(){
	
	india in;
	
	in.setdata();
	in.getdata();

	return 0;
	
}