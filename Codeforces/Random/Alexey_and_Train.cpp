#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<pair<int,int>>v(n+1);
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            v[i] = make_pair(a,b);
        }
        vector<int>tm(n+1);
        for(int i=1;i<=n;i++){
            cin>>tm[i];
        }
        long long ans = 0;
        for(int i=1;i<=n;i++){
            ans+=v[i].first-v[i-1].second+tm[i];
            
            // cout<<ans<<" ";
            if(i==n){
                break;
            }
            ans+=(v[i].second-v[i].first+1)/2;
            if(ans<=v[i].second){
                ans = v[i].second;
            }
            // cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }   
    return 0;
}