#include<iostream>
#include<iomanip>
using namespace std;

int pow(int n)
{
	if(n%2==0)
		return(1);
	else
		return(-1);
}

int main()
{	
	long double i,pi=0.00;
	for(i=0;i<500000000;i++)
	{
		pi+=(pow(i)/((2*i)+1));
	}
	cout<<setprecision(35)<<pi*4<<endl;
}
