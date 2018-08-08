#include<iostream>
using namespace std;

int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if((a!=0)||(b!=0))
		{
			a=a%10;
			if(b==0)
				cout<<"1"<<endl;
			else if(b%4==0)
				cout<<(a*a*a*a)%10<<endl;
			else if(b%4==1)
				cout<<a<<endl;
			else if(b%4==2)
				cout<<(a*a)%10<<endl;
			else if(b%4==3)
				cout<<(a*a*a)%10<<endl;
		}
	}
}
