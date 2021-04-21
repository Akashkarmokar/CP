#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    n+=2;
    vector<long long>v(n);
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    long long val = sum - (v[n-1]+v[n-2]);
    if(val==v[n-2] || val==v[n-1]){
        v[n-2] = -1;
        v[n-1] = -1;
        for(int i=0;i<n;i++){
            if(v[i]!=-1){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
        return ;
    }
    bool ok = false;
    val = sum - v[n-1];
    // cout<<val<<endl;
    for(int i=0;i<n-1;i++){
        if(val-v[i]==v[n-1]){
            v[i]= -1;
            v[n-1] = -1;
            ok = true;
            break;
        }
    }
    if(ok){
        for(int i=0;i<n;i++){
            if(v[i]!=-1){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }else{
        cout<<"-1"<<endl;
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