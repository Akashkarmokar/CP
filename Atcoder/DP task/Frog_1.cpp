#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n,0);
    dp[0] = a[0];
    dp[1] = abs(a[0] - a[1]);
    for(int idx = 2;idx<n;idx++){
        int optOne = dp[idx-1]+ abs(a[idx-1] - a[idx]);
        int optTwo = dp[idx-2]+ abs(a[idx-2] - a[idx]);
        dp[idx] = min(optOne,optTwo);
    }
    cout<<dp[n-1]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}