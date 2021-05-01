#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin>>n;
    if(n%2050!=0){
        cout<<"-1"<<endl;
    }else{
        long long x = n/2050;
        long long ans = 0;
        while(x){
            ans+=x%10;
            x/=10;
        }
        cout<<ans<<endl;
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