#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        char ar[105][105];
        int arr[105][105];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++)
        {
            if(ar[n-1][i]=='D')
                ans++;
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i][m-1]=='R')
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}