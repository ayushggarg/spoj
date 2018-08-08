#include<iostream>
using namespace std;

int dumb(int arr[],int len)
{
	int s1=0,i=0;
	//cout<<"hi";
	while(i<len)
	{
		
		if(arr[i]<arr[len])
		{
			s1+=arr[len];
			len--;
		}
		else
		{
			s1+=arr[i];
			i++;
		}

		if(arr[i]<arr[len])
		{
			i++;
		}
		else
		{
			len--;
		}
	}
	return s1;

}

int smart(int arr[],int len)
{
	int sum1=0,sum2=0,s1=0,i=0;
	while(i<len)
	{
		while(i<len)		
		{
			sum1+=arr[i];
			sum2+=arr[i+1];
		}
		
		if(sum1<sum2)
		{
			s1+=arr[len];
			len--;
		}
		else
		{
			s1+=arr[i];
			i++;
		}

		if(sum1<sum2)
		{
			i++;
		}
		else
		{
			len--;
		}
	}
	return s1;
}

int main()
{
	int i,t,len,arr[30],tmp;
	cin>>t;

	while(t--)
	{
		cin>>len;
		for(i=0;i<len;i++)
		{
			cout<<"hi";
			cin>>arr[i];
		}
		cout<<"HI";
		
		
		cout<<dumb(arr,len-1);
		cout<<smart(arr,len-1);
	}

}

