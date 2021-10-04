#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n; cin>>n;
    long long sum = 0;
    for(int i=0;i<n;i++){
        int x ; cin>>x;
        sum+=x;
    }
    if(sum<n){
        cout<<1<<endl;
    }else{
        cout<<sum-n<<endl;
    }
}

int main()
{
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}