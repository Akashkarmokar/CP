#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        ll x,y;
        cin>>x>>y;
        if(x<y || ((x+y)&1)==1)
        {
            cout<<"impossible"<<endl;
            continue;
        }
        ll a = (x+y)/2;
        cout<<max(a,x-a)<<" "<<min(a,x-a)<<endl;
    }
    return 0;
}