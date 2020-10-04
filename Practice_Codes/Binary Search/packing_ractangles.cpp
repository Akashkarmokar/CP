#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll w,h,n;
ll good(ll m)
{
    return (m/w)*(m/h)>=n;
}

int main()
{

    cin>>w>>h>>n;

    ll l=0,r=1,mid;
    while(!good(r))
        r*=2;
    while(l+1<r)
    {
        mid = (l+r)/2;
        if(good(mid))
            r=mid;
        else
            l = mid;
    }
    cout<<r<<"\n";
    return 0;
}