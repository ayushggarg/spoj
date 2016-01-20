#include<iostream>
using namespace std;

struct node
{
	int data;
	node *link;
};

int main()
{
	int t,n,m,i,j,k,v,x,y,s,tst[10000],a[10000];
	node *first, *temp, *last;
	node *fst, *fst, *lst; 

	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>n>>m;
		first=new node;
		cin>>first->data;
		first->link=NULL;
		temp=first;
		for(i=1;i<n;i++)
		{
			last=new node;
			cin>>last->data;
			last->link=NULL;
			temp->link=last;
			temp=last;
		}
		
		for(i=0;i<m;i++)
		{
			cin>>v>>x>>y;
			s=0;
			for(j=1;j<x-2;j++)
			{
				temp=temp->link;
			}
			for(j=x-1;j<y;j++)
			{
				if(temp->data%v==0)
				{
					s+=temp->data;
					temp=temp->link;
				}
			}
			
			tst[i]=s;
			
		}
		cout<<"Case #"<<k<<endl;
		for(i=0;i<m;i++)
			cout<<tst[i]<<endl;
		cout<<endl;
	}
}

