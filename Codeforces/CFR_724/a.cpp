#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n; cin>>n;
    bool ok = true;
    for(int i=0;i<n;i++){
        int ab; cin>>ab;
        if(ab<0){
            ok = false;
        }
    }
    if(!ok){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        cout<<101<<endl;
        for(int i=0;i<=100;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}


