#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(3,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }

    int ans = 1e9+5;
    bool ok = false;
    for(int i=0;i<n;i++)
    {
        if((v[i][2]-v[i][0]>0) && (v[i][1]<ans))
        {
            ans = v[i][1];
            ok = true;
        }
    }
    if(ok)
        cout<<ans<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}