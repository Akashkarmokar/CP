#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    int a;
    for(auto it:m){
        if(it.second==1){
            a = it.first;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==a){
            cout<<i+1<<endl;
            break;
        }
    }
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