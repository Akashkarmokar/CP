#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,q;
    cin>>n>>q;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long> low(n);
    for(int i=0;i<n;i++){
        low[i] = v[i] - (i+1);
    }

    while(q--){
        long long k; cin>>k;
        int idx = lower_bound(low.begin(),low.end(),k)-low.begin();
        if(idx == n){
            cout<<v[n-1] + (k-low[n-1])<<"\n";
        }else{
            cout<<v[idx] - (low[idx]-k+1)<<"\n";
        }
    }

    return 0;
}