#include<iostream>
using namespace std;

int main()
{
	int t,n,m,a[10000],i,j,k,v,x,y,s,tst[10000];
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<m;i++)
		{
			cin>>v>>x>>y;
			s=0;
			for(j=x-1;j<y;j++)
			{
				if(a[j]%v==0)
					s+=a[j];
			}
			tst[i]=s;
			
		}
		cout<<"Case #"<<k<<endl;
		for(i=0;i<m;i++)
			cout<<tst[i]<<endl;
		cout<<endl;
	}
}

