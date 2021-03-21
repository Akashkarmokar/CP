#include<bits/stdc++.h>
using namespace std;
int dp[15];

int f(int index,vector<int>&v){
    if(dp[index]!=-1){
        return dp[index];
    }
    int ans = 0;
    for(int j=index+1;j<v.size();j++){
        if(v[j]>v[index]){
            ans = max(ans,f(j,v));
        }
    }
    dp[index] = ans + 1;
    return dp[index];
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        dp[i]=-1;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans,f(i,v));
    }
    cout<<ans<<endl;
    return 0;
}