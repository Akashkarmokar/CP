#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n,ans=0;
        bool ok = true;
        cin>>n;
        while(n)
        {
            if(n==1)
            {
                break;
            }
            if(n%6==0)
            {
                n/=6;
            }
            else
            {
                n*=2;
                if(n%6!=0)
                {
                    break;
                }
            }
            ans++;
        }
        if(n==1)
            cout<<ans<<endl;
        else
            cout<<"-1"<<endl;

    }
    return 0;
}