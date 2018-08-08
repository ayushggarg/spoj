#include<iostream>
using namespace std;

int cube(int ch)
{
	int f=0;
	long long int i,c=0;
	for(i=ch;f!=1;i++)
	{	
		c=i*i*i;
		if((((c%10)*100)+(((c/10)%10)*10)+((c/100)%10))==888)
		{
			f=1;
			return(i);
		}
	}
}

int main()
{
	int t,k;
	long long int ch;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ch=191;
		cin>>k;
		for(int j=0;j<k;j++)
		{
			ch=cube(ch+1);
		}
		cout<<ch<<endl;
	}
}
