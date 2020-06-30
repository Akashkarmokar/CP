#include<bits/stdc++.h>
using namespace std;
#define Max 20000010


int prime[Max];
int twin_prime[Max];


void seive()
{
	int root = sqrt(Max);
	prime [0] = 1;
	prime [1] = 1;
	for(int i = 4 ;i <= Max ;i+=2)
	{
		prime[i] = 1;
	}
	for(int i = 3;i<=root;i+=2)
	{
		if(prime[i]==0)
		{
			for(int j = i*i ;j<=Max; j+=i)
			{
				prime[j]=1;
			}
		}
	}
}


void twin_p()
{
	int j = 1;
	for(int q=3;q<=Max;q++)
	{
		if(prime[q]==0 && prime[q+2]==0)
		{
			twin_prime[j]=q;
			j++;
		}
	}
}


int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("in.txt","r",stdin);
	// freopen("ou.txt","w",stdout);
	// #endif

	seive();
	twin_p();

	int number ;
	while(cin>>number)
	{
		printf("(%d, %d)\n",twin_prime[number],twin_prime[number]+2);
	}
	return 0;
}
