#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int i,srt,f=0,k;
	for(i=1;i<900000000000;i=((i+1234567890)%2147483648))
	{
		srt=sqrt(i);
		f=0;
		for(k=2;k<=srt;k++)
		{
			if(i%k==0)
			{
				f=1;
				break;
			}
		}
		if((f==0)&&(i!=1))
			cout<<"1";
		else
			cout<<"0";
	}
}
