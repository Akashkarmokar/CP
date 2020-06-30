#include<bits/stdc++.h>
#define ll long long ;
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    int m,n,ans;
    for(int i = 1;i<=test_case;i++)
    {   
        cin>>m>>n;
        ans = m*n;
        if (m==1 || n ==1)
        {
            ans = max (m,n);
            cout<<"Case "<<i<<": "<<ans<<endl;
        }
        else if(m==2 || n==2)
        {
            int big = max (m,n);
            ans = big;
            if(big%4==1 || big%4==3)
                ans++;
            if(big%4 == 2)
                ans+=2;
            cout<<"Case "<<i<<": "<<ans<<endl;
        }
        else if (ans % 2 == 1)
            cout<<"Case "<<i<<": "<<ans/2+1<<endl;
        else
            cout<<"Case "<<i<<": "<<ans/2<<endl;

    }
    return 0;
}
