#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        ll l,r,m;
        cin>>l>>r>>m;
        ll x = m+l-r,y=m+r-l;

        for(int a = l;a<=r;a++)
        {
            ll na = y-(y%a),b,c;
            if(na>=x && na<=y)
            {
                if(na>=m)
                {
                    ll df = na-m;
                    c=r;
                    b=r-df;
                }
                else
                {
                    ll df = m - na;
                    b = r;
                    c = r -df;
                }
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
            }
        }
    }
    return 0;
}