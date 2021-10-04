#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());


    pair<int,int> idx;
    int mn_dif = INT_MAX;

    for(int i=1;i<n;i++){
        int dif = v[i] - v[i-1];
        // cout<<"Dif: "<<dif<<endl;
        if(dif<mn_dif){
            // cout<<"dif: "<<dif<<endl;
            mn_dif = dif;
            idx.first = i-1;
            idx.second = i;
        }
    }
    // cout<<idx.first<<" "<<idx.second<<endl;
    cout<<v[idx.first]<<" ";
    for(int i=idx.second+1;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int i=0;i<idx.first;i++){
        cout<<v[i]<<" ";
    }
    cout<<v[idx.second]<<endl;
}

int main()
{
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}