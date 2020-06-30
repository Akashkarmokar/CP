#include<iostream>
#include<math.h>
using namespace std;
#define MAX 1000002

int prime[MAX];
int d_prime[MAX];

void seive()
{
	prime[0]=1;
	prime[1]=1;
	for(int i = 4;i<=MAX ;i+=2)
	{
		prime[i] = 1 ;
	}
	int sq = sqrt(MAX);
	for(int i = 3 ;i<=sq ; i+=2)
	{
		if(prime[i]==0)
		{
			for(int j = i*i ; j <= MAX ;j+=i)
			{
				prime[j] = 1 ;
			}
		}
	}

}
int check(int num)
{
	int sum = 0;
	while(num!=0)
	{
		sum = sum + (num % 10);
		num = num / 10 ;
	}
	return sum ;
}

void d_prime_fn()
{
	int cnt = 0;
	for(int i = 0 ;i<=MAX-2;i++)
	{
		if(prime[i]==0 && prime[check(i)]==0)
		{
			cnt++;
		}
		d_prime[i]=cnt;
	}
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("in.txt","r",stdin);
	// freopen("ou.txt","w",stdout);
	// #endif

	int test_case;
	scanf("%d",&test_case);
	int from ,to ;
	seive();
	d_prime_fn();
	while(test_case--)
	{
		scanf("%d %d",&from,&to);
		printf("%d\n",d_prime[to]-d_prime[from-1]);
	}

	return 0 ;
}
