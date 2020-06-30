#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        ll l=0,h=n,mid,ans;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(mid*x+y<=n)
            {
                ans = mid*x+y;
                l = mid + 1;
            }
            else
            {
                h= mid -1;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}