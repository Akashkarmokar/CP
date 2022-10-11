#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> values(m+1);
    
    for(int i=0;i<n;i++){
        if(a[i]>=n) continue;
        int l = (a[i]>=0? 1 : (-a[i]+i)/(i+1));
        int r = min(m+1,(n-a[i]+i)/(i+1));
        for(int j=l;j<r;j++){
            values[j].push_back(a[i]+(i+1)*j);
        }
    }
    for(int i=1;i<=m;i++){
        /**
         * First Approach
         */
        int sz = (int)values[i].size();
        vector<bool> ext(sz+1);
        for(auto it: values[i]){
            if(it < sz) ext[it] = true;
        }
        int res = 0;
        while(ext[res]) res++;
        cout<<res<<endl;
        /**
         * Slow Approach
         */
        // set<int> mex(values[i].begin(),values[i].end());
        // for(int j=0;j<=values[i].size();j++){
        //     if(mex.find(j) == mex.end()){
        //         cout<<j<<endl;
        //         break;
        //     }
        // }
    }
}

int main(){
    int tc = 1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
