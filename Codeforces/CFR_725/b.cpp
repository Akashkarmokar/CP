#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%n!=0){
        cout<<"-1"<<endl;
    }else{
        int s = sum/n;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s<v[i]){
                ans++;
            }
        }
        cout<<ans<<"\n";
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