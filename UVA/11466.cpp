#include<bits/stdc++.h>
using namespace std;
#define Max 10000005
int prime[Max];
vector<int>p;
vector<long long int>ans;

void sieve()
{
    prime[0]=prime[1]=1;
    for(int i = 4;i<Max;i+=2)
    {
        prime[i] = 1;
    }
    int sq = sqrt(Max);
    for(int i=3 ;i<=sq;i+=2)
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
    for(int i = 3;i<Max;i+=2)
    {
        if(prime[i]==0)
        {
            p.push_back(i);
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    sieve();
    long long int n ;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0 ;
        }
        if(n<0)
            n*=-1;
        
        int j = 1;
        for(int i = 0 ;i<p.size() && n!=1;i++)
        {
            while(n%p[i]==0)
            {
                n/=p[i];
                if(p[i]>j)
                {
                    j = p[i];
                    ans.push_back(p[i]);
                }
            }
        }
        if(n>1)
            ans.push_back(n);
        if(ans.size()>1)
        {
            cout<<ans[ans.size()-1]<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        ans.clear();

    }
    return 0;
}