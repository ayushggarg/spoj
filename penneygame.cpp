#include<iostream>
using namespace std;
int main()
{
	string str;
	int p,n,a1,a2,a3,a4,a5,a6,a7,a8;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>n;
		cin>>str;
		a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;
		for(int j=0;j<40;j++)
		{
			if((str[j]==84)&&(str[j+1]==84)&&(str[j+2]==84))
				a1++;
			if((str[j]==84)&&(str[j+1]==84)&&(str[j+2]==72))
				a2++;
			if((str[j]==84)&&(str[j+1]==72)&&(str[j+2]==84))
				a3++;
			if((str[j]==84)&&(str[j+1]==72)&&(str[j+2]==72))
				a4++;
			if((str[j]==72)&&(str[j+1]==84)&&(str[j+2]==84))
				a5++;
			if((str[j]==72)&&(str[j+1]==84)&&(str[j+2]==72))
				a6++;
			if((str[j]==72)&&(str[j+1]==72)&&(str[j+2]==84))
				a7++;
			if((str[j]==72)&&(str[j+1]==72)&&(str[j+2]==72))
				a8++;
		}
		cout<<n<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<" "<<a8<<endl;
	}
}
