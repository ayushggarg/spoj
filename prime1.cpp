#include<iostream>
#include<math.h>
using namespace std;

int fact(int j)
{
	int srt,f=0;
	srt=sqrt(j);
	for(int k=2;k<=srt;k++)
	{
		if(j%k==0)
		{
			f=1;
			break;
		}
	}
	if((f==0)&&(j!=1))
		cout<<j<<endl;
}

int main()
{
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>m>>n;
		for(int j=m;j<=n;j++)
		{
			fact(j);
		}
	cout<<endl;
	}
}
