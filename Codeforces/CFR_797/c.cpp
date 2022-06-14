#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> s(n), f(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    int prev = 0;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i] = f[i] - max(prev,s[i]);
        prev = max(prev,f[i]);
        cout<<ans[i]<<" ";
    }
    cout<<"\n";


}

int main(){
    int tc = 0;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}