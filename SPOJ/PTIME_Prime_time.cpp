#include<bits/stdc++.h>
using namespace std;
#define Max 10000005
int prime[Max];
vector<int>p;
void sieve()
{
    prime[0] = prime[1] = 1 ;
    for(int i=4;i<Max;i+=2)
        prime[i] = 1;
    int sq = sqrt(Max);
    for(int i = 3 ;i<sq;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j = i*i;j<Max;j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    p.push_back(2);
    for(int i = 3 ;i<Max;i+=2)
    {
        if(prime[i]==0)
        {
            p.push_back(i);
        }
    }
}

int main()
{
    sieve();
    int n ;
    while(cin>>n)
    {
        bool flag = true;
        for(int i = 0 ;i<p.size() && p[i]<=n;i++)
        {
            int primeNumber = p[i];
            int num = n;
            int sum = 0 ;
            while(num)
            {
                sum+=num/primeNumber;
                num/=primeNumber;
            }
            if(flag)
            {
                flag = false;
                cout<<primeNumber<<"^"<<sum;
            }
            else
            {
                cout<<" * "<<primeNumber<<"^"<<sum;
            }
            
        }
        cout<<endl;
    }
    return 0;
}