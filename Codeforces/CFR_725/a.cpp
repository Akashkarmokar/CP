#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]] = i;
    }
    int a = min(mp[1],mp[n]);
    int b = max(mp[1],mp[n]);

    int ans = min(a+1,n-b)+min(max(a+1,n-b),b-a);
    cout<<ans<<endl;

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}