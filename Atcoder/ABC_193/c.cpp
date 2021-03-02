#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n;
    cin>>n;
    unordered_set<ll>s;
    for(ll i = 2;i*i<=n;i++)
    {
        ll x = i*i;
        while(x<=n)
        {
            s.insert(x);
            x*=i;
        }
    }
    cout<<n-s.size()<<endl;
    return 0;
}

