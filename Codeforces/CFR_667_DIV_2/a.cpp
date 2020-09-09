#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b;
        cin>>a>>b;
        ll tmp = abs(a-b);
        if(tmp==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            tmp+=9;
            cout<<tmp/10<<endl;
        }
    }
    return 0;
}