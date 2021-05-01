#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int pw = 1 ;
    long long sum = 1;
    int ans;
    while(1){
        pw*=2;
        sum+=pw;
        if(n%sum==0){
            ans = n/sum;
            break;
        }
    }
    cout<<ans<<endl;
}


int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}