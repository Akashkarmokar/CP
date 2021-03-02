#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    vector<string>row(h);
    vector<vector<int>>d(h,vector<int>(w,0));
    for(int i=0;i<h;i++)
        cin>>row[i];

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(row[i][j]=='#')
            {
                d[i][j] = 1;
            }
            else
            {
                d[i][j] = 0;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<h-1;i++)
    {
        for(int j=0;j<w-1;j++)
        {
            int sum = d[i][j] + d[i+1][j] + d[i][j+1] + d[i+1][j+1];
            if (sum&1)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}