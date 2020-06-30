#include<bits/stdc++.h>
using namespace std;
#define Max 32770
int prime[Max];

void seive()
{
	prime[0]=1;
	prime[1]=1;
	for(int i = 4;i<=Max;i=i+2)
	{
		prime[i]=1;
	}
	int sq = sqrt(Max);
	for(int i = 3;i<=sq;i+=2)
	{
		if(prime[i]==0)
		{
			for(int j = i*i;j<=Max;j=j+i)
			{
				prime[j]=1;
			}
		}
	}
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("in.txt","r",stdin);
	// freopen("ou.txt","w",stdout);
	// #endif
	
	int number,a,b;
	seive();
	while(cin>>number)
	{
		if(number == 0)
		{
			break;
		}
		int counter = 0;
		int mid = number / 2;

		for(a=2;a<=mid;a++)
		{
			if(prime[a]==0)
			{
				b = number - a;
				if(prime[b]==0)
				{
					counter++;
				}
			}
		}
		cout<<counter<<endl;
	}
	return 0 ;
	
}