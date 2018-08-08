#include<iostream>
using namespace std;

struct node
{
	int data;
	node *link;
};

int main()
{
	long int t,n,x,y,i,j,p,p2=1,s,a1[20],c[20];
	node *first[50], *temp, *last;

	cin>>t;
	while((t--)&&(t<=50))
	{
		cin>>n;
		first[t]=new node;
		cin>>first[t]->data;
		first[t]->link=NULL;
		temp=first[t];
		for(y=1;y<n;y++)
		{
			last=new node;
			cin>>last->data;
			last->link=NULL;
			temp->link=last;
			temp=last;
		}
		for(y=0;y<20;y++)
			c[y]=0;
	
		temp=first;
		while(temp!=NULL)
		{
			p=temp->data;
			temp=temp->link;
			i=19;
			while(p>0)
			{
				a1[i--]=p%2;
				p/=2;
			}
			
		
			for(j=0;j<20;j++)
			{
				if(a1[j]==0&&c[j]==0)
					c[j]=0;
				else
					c[j]=1;
			}
		}
		s=0;
		p2=1;
		for(y=19;y>=0;y--)
		{
			s+=(c[y]*p2);
			p2*=2;
		}
		cout<<s<<endl;
	}	
}
