#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
    }
    if(s.size()==n){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}