#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int mx = 1 ;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
        mx = max(mx,mp[x]);
    }
    cout<<mx<<endl;
    return 0;
}