#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;cin>>n;
    vector<long long>v(n+1), dp(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    // dp[n] = v[n];
    dp[n] = 0;
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            dp[i] = abs(v[i]-v[i+1]);
        }else{
            dp[i] =  min(abs(v[i]-v[i+1])+dp[i+1],abs(v[i]-v[i+2])+dp[i+2]);
        }
    }
    cout<<dp[1]<<endl;
}

int main()
{
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}