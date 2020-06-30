#include<bits/stdc++.h>
using namespace std;
#define Max 1000001
int prime[Max];
vector<int>p;

void sieve()
{
    prime[0]=prime[1]=1;
    for(int i=4;i<Max;i+=2)
    {
        prime[i] = 1;
    }
    //p.push_back(2);
    int sq = sqrt(Max);
    for(int i=3;i<sq;i+=2)
    {
        if(prime[i]==0)
        {
            //p.push_back(i);
            for(int j = i*i;j<Max;j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    p.push_back(2);
    for(int i = 3 ;i<Max ;i+=2)
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
    long long int n;
    while(cin>>n)
    {
        if(n==-1)
        {
            return 0;
        }
        for(int i = 0 ;i<p.size();i++)
        {
            while(n%p[i]==0)
            {
                n/=p[i];
                printf("    %d\n",p[i]);
            }
        }
        if(n!=1)
        {
            printf("    %lld\n",n);
        }
        printf("\n");
    }
    return 0;
}
