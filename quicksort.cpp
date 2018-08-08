#include<iostream>
using namespace std;

int partition(int a[],int f,int n)
{
	int p,i,j,tmp;
	p=a[n];
	i=f-1;
	j=n+1;
	while(true)
	{
			do(j-=1);
		while(a[j]<=p);
			do(i+=1);
		while(a[i]>=p);
		if(i<j)
		{
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
		else
			return(j);
	}
}

int rndprt(int a[],int f,int n)
{
	int r,tmp;
	//r=rand(f,n);
	r=(n+f)/2;
	tmp=a[r];
	a[r]=a[n];
	a[n]=tmp;
	return partition(a,f,n);
}

int rndquicksort(int a[], int f, int n)
{
	int q;
	if(f<n)
	q=rndprt(a,f,n);
	rndquicksort(a,f,q);
	rndquicksort(a,q+1,n);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	rndquicksort(a,0,n);
	for(int i=0;i<n;i++)
		cout<<a[i];

}
