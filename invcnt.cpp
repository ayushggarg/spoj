#include<iostream>
using namespace std;

int main()
{
	long int t,n,no,i,j,tmp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int a[n];
		tmp=n;
		i=0;
		while(tmp--)
		{
			cin>>a[i++];
		}
		no=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
					no++;
			}
		}
		cout<<no<<endl;
	}
}
