#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int div = n/3;
    int rem  = n%3;
    if(rem){
        if(rem==2)
            cout<<div+1<<" "<<div+rem<<" "<<div-1<<endl;
        else
            cout<<div<<" "<<div+2<<" "<<div-1<<endl;
    }else{
        cout<<div<<" "<<div+1<<" "<<div-1<<endl;
    }
}

int main(){
    
    int tc = 0;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}