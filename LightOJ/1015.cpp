#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int testcase;
    cin>>testcase;
    int t = 1 ;
    while(testcase--)
    {
        ll contestant ;
        cin>>contestant;
        ll total_dust = 0 ;
        for(int i = 1 ;i<=contestant;i++)
        {
            int dust;
            cin>>dust;
            if(dust>0)
                total_dust+=dust;
        }
        cout<<"Case "<<t++<<": "<<total_dust<<endl;
    }
    return 0 ;
}