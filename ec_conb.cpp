#include<iostream>
using namespace std;


int main()
{
	long int n,tmp,i,b,bi[1000],j,s,p,k;
	cin>>n;
	long int a[n];
	tmp=n;
	i=0;
	while(tmp--)
		cin>>a[i++];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			for(k=0;k<1000;k++)
				bi[k]=0;
			j=0;
			b=a[i];
			k=0;
			while(b>0)
			{
				bi[j++]=b%2;
				b/=2;
				k++;
			}
			p=1;
			s=0;	
			for(j=k-1;j>=0;j--)
			{
				s+=(bi[j]*p);
				p*=2;
			}
			a[i]=s;
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
}
