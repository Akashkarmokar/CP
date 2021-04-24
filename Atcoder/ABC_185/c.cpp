#include<bits/stdc++.h>
using namespace std;

long long dp[300][300];

long long ok(long long i,long long n,long long cuts){
    if(i>n){
        return 0;
    }
    if(cuts==0){
        return 1;
    }
    if(dp[i][cuts]!=-1){
        return dp[i][cuts];
    }
    long long ans = 0;
    for(int j=i+1;j<n;j++){
        ans+=ok(j,n,cuts-1);
    }
    return dp[i][cuts]=ans;
}


int main()
{
    memset(dp,-1,sizeof(dp));
    int n;cin>>n;
    long long ans = ok(0LL,n,11LL);
    cout<<ans<<endl;
    return 0;
}