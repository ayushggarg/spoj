#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	for(a=6;a<=100;a++)
	{
		for(b=a-1;b>1;b--)
		{
			for(c=b-1;c>1;c--)
			{
				for(d=c-1;d>1;d--)
				{	
					if((a*a*a)==(b*b*b)+(c*c*c)+(d*d*d))
						cout<<"Cube = "<<a<<", Triple = ("<<d<<","<<c<<","<<b<<")"<<endl;
				}
			}
		}
	}
}
