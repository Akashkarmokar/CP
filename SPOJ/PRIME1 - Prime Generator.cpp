#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 32000
int prime[Max];
vector<int>primevect;

// Sieve Function
void sieve()
{
    prime[0] = 1 ;
    prime[1] = 1 ;
    for(int i = 4 ;i<Max;i+=2)
        prime[i] = 1 ;
    int root = sqrt(Max);
    for(int i = 3 ;i<root;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j = i*i ;j<Max;j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    primevect.push_back(2);
    for(int i = 3;i<Max;i+=2)
    {
        if(prime[i]==0)
            primevect.push_back(i);
    }
}
void segment(ll l,ll r)
{
    bool isprime[r-l+1];
    for(int i =0 ;i<r-l+1;i++)
        isprime[i] = true;
    if(l==1) isprime[0]=false;
    for(int i = 0 ;primevect[i]*primevect[i]<=r;i++)
    {
        int currentprime = primevect[i];
        ll base = (l/currentprime)*currentprime;
        if(base<l) base+=currentprime;
        for(ll j = base;j<=r;j+=currentprime)
        {
            isprime[j-l]=false;
        }
        if(base==currentprime) isprime[base-l]=true;
    }
    for(int i = 0 ;i<r-l+1;i++)
    {
        if(isprime[i])cout<<i+l<<endl;
    }
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    sieve();
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll l,r;
        cin>>l>>r;
        segment(l,r);
        cout<<"\n";
    }
    return 0;
}
