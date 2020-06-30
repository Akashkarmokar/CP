#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n;
        cin>>n;
        int mx = 0 ;
        for(int j=1;j<=n;j++)
        {
            int x;
            cin>>x;
            mx=max(mx,x);
        }
        cout<<"Case "<<i<<": "<<mx<<endl;
    }
    return 0;
}