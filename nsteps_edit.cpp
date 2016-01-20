#include<iostream>
using namespace std;

int main()
{	
	int n,x,y;

	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if(x==0&&y==0)
			cout<<"0"<<endl;
		else if(x==1&&y==1)
			cout<<"1"<<endl;
		else if(x%2==0)
		{
			if(y==x||y==x-2)
				cout<<y+x<<endl;
			else
				cout<<"No Number"<<endl;
		}
		else if(x%2!=0)
		{
			if(y==x||y==x-2)
				cout<<x+y-1<<endl;
			else
				cout<<"No Number"<<endl;	
		}
	}
}
