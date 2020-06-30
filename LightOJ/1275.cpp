#include<bits/stdc++.h>
using namespace std;
#define ll long long




ll f(ll n,ll c,ll t)
{
    return t*(c-t*n);
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n,c;
        cin>>n>>c;
        if(n==0)
        {
            cout<<"Case "<<i<<": "<<0<<endl;
            continue;
        }
        ll t = c/(2*n);
        ll t1=t+1;
        if(f(n,c,t)>=f(n,c,t1))
            cout<<"Case "<<i<<": "<<t<<endl;
        else
            cout<<"Case "<<i<<": "<<t1<<endl;
    }
    return 0;
}



// here i use minimum and maximum value finding approach of a function 