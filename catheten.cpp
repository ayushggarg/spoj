#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int sq,t,n,i,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		c=0;
		for(i=1;i<1000000000;i++)
		{
			sq=sqrt((n*n)+(i*i));
			if (sqrt((n*n)+(i*i))==sq)
				c++;
		}
		cout<<c<<endl;
	}

}
