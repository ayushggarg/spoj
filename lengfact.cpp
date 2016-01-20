#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	long long int n,a;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=(log(2*(22/7))-(2*n)+(1+(2*n))*log(n))/(2*log(10));
		cout<<a+1<<endl;
	}
}
