#include<bits/stdc++.h>
using namespace std;

#define lightoj_print(i,j) (printf("Case %d: %d\n",i,j))
#define Max 10009 
#define ll long long 
long long dp[Max];
int a, b, c, d, e, f,n;
ll fn(ll n)
{
    if(n==0) return a;
    if(n==1) return b;
    if(n==2) return c;
    if(n==3) return d;
    if(n==4) return e;
    if(n==5) return f;
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    else
    {
        dp[n]= (fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%10000007;
        return dp[n];
    }
}

int main()
{
    int tc;
    cin>>tc;
    for(int i =1;i<=tc;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>a>>b>>c>>d>>e>>f>>n;    
        lightoj_print(i,fn(n)%10000007);
    }
    return 0;
}
