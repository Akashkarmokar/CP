#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        ll mn_a = 1000000005;
        ll mn_b = 1000000005;
        vector<ll>va(n),vb(n);
        for(int i=0;i<n;i++)
        {
            cin>>va[i];
            mn_a = min(mn_a,va[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>vb[i];
            mn_b=min(mn_b,vb[i]);
        }
        ll cnt = 0;
        for(int i=0;i<n;i++)
        {
            ll a = abs(va[i]-mn_a);
            ll b = abs(vb[i]-mn_b);
            cnt+=min(a,b)+(max(a,b)-min(a,b));
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}