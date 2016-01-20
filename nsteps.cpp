#include<iostream>
using namespace std;

int main()
{	
	int n,p,i,j,x,y;
	static int ar[10000][10000];
	ar[0][0]=0;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		i=1,j=1,p=1;
		while((i<=y)||(j<=x))
		{
			
			ar[j][i]=p++;
			j++;
			i--;
			
			ar[j][i]=p++;
			j++;
			i++;
			
			ar[j][i]=p++;
			j--;
			i++;
			
			ar[j][i]=p++;
			j++;
			i++;
			
		}
		
		if(ar[x][y]==0)
		cout<<"No Number"<<endl;
		else
		cout<<ar[x][y]<<endl;
	
	}
}
