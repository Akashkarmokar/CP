#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    sort(v.begin(),v.end());
    vector<int>ans;
    int cur_max = -1;
    for(int i=0;i<n;i++){
        if(cur_max<v[i]){
            cout<<v[i]<<" ";
            cur_max = v[i];
        }else{
            ans.push_back(v[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}