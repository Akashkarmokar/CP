#include<bits/stdc++.h>
using namespace std;



void solve(){
    long long n,ll,rr;
    cin>>n>>ll>>rr;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long ans = 0;

    for(int i=0;i<n-1;i++){
        int l = i+1;
        int r = n-1;
        int a = 0, b = n;

        while(l<=r){
            int mid = (l+r)>>1;
            if(v[mid]+v[i]<=rr){
                a = mid;
                l = mid+1;
            }else{
                r = mid - 1;
            }
        }
        l = i+1;
        r = n-1;
        while(l<=r){
            int mid = (l+r)>>1;
            if(v[mid]+v[i]>=ll){
                b = mid;
                r = mid -1 ;
            }else{
                l = mid + 1;
            }
        }
        if(a>=b)
            ans+=(a-b)+1;
    }
    cout<<ans<<"\n";
    
}

int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}