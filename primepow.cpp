#include<iostream>
#include<math.h>
using namespace std;

int prime(long long int j)
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
	long long int n,p,k,tmp,j;
	int t,f=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(j=2;j<=n;j++)
		{
			p=prime(j);
			tmp=p;
			k=1;
			while((tmp!=0)&&(n%tmp==0)&&((n/tmp)>1))
			{
					tmp*=p;
					k++;
			}
			if(tmp==n)
			{
				f=1;
				cout<<p<<" "<<k<<endl;	
				break;	
			}	
		}
		if(f==0)
			cout<<"Invalid order"<<endl;
	}
}
