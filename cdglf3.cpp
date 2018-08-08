#include<iostream>
using namespace std;



long int a1[20],c[20],no[10000];

int main()
{
	long int t,n,x,y,i,j,p,p2=1,s,k;
	cin>>t;
	while((t--)&&(t<=50))
	{
		cin>>n;
		y=0;
		while((y<n)&&(n<10000))
		{
			cin>>no[y++];
		}
		for(y=0;y<20;y++)
			c[y]=0;

		for(x=0;x<n;x++)
		{
			p=no[x];
			i=19;
			while(p>0)
			{
				a1[i--]=p%2;
				p/=2;
			}
			
		
			for(j=0;j<20;j++)
			{
				if(a1[j]==0&&c[j]==0)
					c[j]=0;
				else
					c[j]=1;
			}
		}
		s=0;
		p2=1;
		for(y=19;y>=0;y--)
		{
			s+=(c[y]*p2);
			p2*=2;
		}
		cout<<s<<endl;
	}	
}
