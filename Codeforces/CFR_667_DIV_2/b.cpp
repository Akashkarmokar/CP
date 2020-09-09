#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll fn(ll a,ll b,ll x,ll y,ll n)
{
    ll aa = min(n,a-x);
    ll bb = min(n-aa,b-y);
    ll ans = (a-aa)*(b-bb)*1ll; 
    return ans;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        cout<<min(fn(a,b,x,y,n),fn(b,a,y,x,n))<<endl;
    }
    return 0;
}