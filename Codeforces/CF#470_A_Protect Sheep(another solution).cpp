#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;cin>>r>>c;
    char land[r+5][c+5];
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            cin>>land[i][j];
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
            if(land[i][j]=='W')
            {
                if(land[i][j+1]=='S'|| land[i][j-1]=='S' || land[i-1][j]=='S' || land[i+1][j]=='S')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    cout<<"Yes"<<endl;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(land[i][j]=='.')
                cout<<'D';
            else
                cout<<land[i][j];
        }
        cout<<endl;
    }
    return 0;
}
