#include<iostream>
using namespace std;

int main()
{
	long long int a,b,c,n,pr=0;
	cin>>n;
	for(c=5;c<=n;c++)
	{
		for(b=(c/3)*2;b<c;b++)
		{
			for(a=c-b;a<b;a+=2)
			{
				if((a*a)+(b*b)==(c*c))
				{
					cout<<a<<"\t"<<b<<"\t"<<c<<endl;
					pr++;
				}
			}
		}
	}
	cout<<pr<<endl;
}
			
