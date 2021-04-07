#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long ans = 1e18;
    for(int i=0;i<(1<<(n-1));i++){
        long long xored = 0;
        long long ored = 0;
        for(int j=0;j<=n;j++){
            if(j<n){
                ored|=v[j];
            }
            if(j==n || (i>>j & 1)){
                xored^=ored;
                ored = 0;
            }
        }
        ans = min(ans,xored);
    }
    cout<<ans<<endl;
    return 0;
}