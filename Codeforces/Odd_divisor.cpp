#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;cin>>n;
    while(n%2==0)
    {
        n/=2;
    }
    cout<<(n==1?"NO":"YES")<<endl;
}

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}