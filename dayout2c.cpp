#include<iostream>
#include<math.h>
using namespace std;

int fact(long long int j)
{
	int srt,f=0,k;
	srt=sqrt(j);
	for(k=2;k<=srt;k++)
	{
		if(j%k==0)
		{
			f=1;
			break;
		}
	}
	if((f==0)&&(j!=1))
		return(j);
}

int main()
{
	int t;
	long long int n,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		p=fact(n);
		if(p!=0)
			cout<<n<< " is a prime"<<endl;
		else
			cout<<n<< " is not a prime"<<endl;
	}
}
