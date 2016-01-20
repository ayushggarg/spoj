#include<iostream>
using namespace std;

int rev(int m)
{
	int t,rev=0;
	t=m;
	for(;t>0;)
	{
		rev=(rev*10)+(t%10);
		t/=10;
	}
	return(rev);
}

int main()
{
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		a=rev(a);
		b=rev(b);
		cout<<rev(a+b)<<endl;
	}
}
