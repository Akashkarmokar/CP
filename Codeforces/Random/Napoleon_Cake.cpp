#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int>v(n),ans(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mn = 2e5+5;
        for(int i=n-1;i>=0;i--){
            mn = min(mn,i-v[i]);
            // cout<<mn<<" ";
            if(mn<i){
                ans[i]=1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}