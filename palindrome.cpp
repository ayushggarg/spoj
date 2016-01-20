#include<iostream>
using namespace std;

int palin(int j)
{
	int p=0,t,f=0;
	t=j;
	for(;t>0;)
	{
		p=(p*10)+(t%10);
		t/=10;
	}
	if(p==j)
	{
		f=1;
		cout<<p<<endl;
   	}
	return(f);
}

int main()
{
	int t,k,f;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>k;
		f=0;
		for(int j=++k;(f!=1)&&(k<1000000);j++)
		{
			f=palin(j);
		}
	}
}
