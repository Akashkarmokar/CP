#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        bool ok = true;
        for(int i=1;i<n;i++)
        {
            int tmp = abs(v[i]-v[i-1]);
            if(tmp>1)
            {
                ok =false;
            }
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}