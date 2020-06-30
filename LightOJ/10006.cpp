#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a,b,c,d,e,f,n;
int main() 
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    ll tc;
    cin>>tc;
    ll ans[10005];
    ll n ;
    for(ll i = 1 ;i<=tc;i++)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f>>n;
        ans[0] = a%10000007;
        ans[1] = b%10000007;
        ans[2] = c%10000007;
        ans[3] = d%10000007;
        ans[4] = e%10000007;
        ans[5] = f%10000007;
        for(ll j=6;j<=n;j++)
        {
            ans[j]=(ans[j-1]+ans[j-2]+ans[j-3]+ans[j-4]+ans[j-5]+ans[j-6])%10000007;
        }
        printf("Case %lld: %lld\n",i,ans[n]);    
    }
    return 0;
}