#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m,x;
    cin>>n>>m>>x;
    x--;
    int r = x%n;
    int c = x/n;
    cout<<r*m+c+1<<endl;
}

int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}