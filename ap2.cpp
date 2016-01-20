#include<iostream>
using namespace std;

int main()
{
	int t,a,f,z,s,n,d;
	cin>>t;
	while(t--)
	{	
		cin>>a>>z>>s;
		n=(2*s)/(a+z);
		d=(z-a)/(n-5);
		f=a-(2*d);
		cout<<n<<endl;
		cout<<f<<" ";
		while(--n)
		{
			f+=d;
			cout<<f<<" ";
		}
	cout<<endl;
	}
}
