#include<bits/stdc++.h>
using namespace std;
 
#define sz 110
char board[sz][sz];
int X[]={0,0,1,-1};
int Y[]={1,-1,0,0};
int r,c;
 
void dfs(pair<int,int>source,bool flag)
{
    board[source.first][source.second]=flag?'B':'W';
    for(int i=0;i<4;i++)
    {
        int x = source.first+X[i];
        int y = source.second+Y[i];
        if(board[x][y]=='.')
            dfs(make_pair(x,y),!flag);
    }
}
int main()
{
    cin>>r>>c;
    vector<pair<int,int>>source;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>board[i][j];
            if(board[i][j]=='.')
                source.push_back(make_pair(i,j));
        }
    }
    for(int i=0;i<source.size();i++)
    {
        if(board[source[i].first][source[i].second]=='.')
            dfs(source[i],true);
    }
    // output
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<board[i][j];
        }
        cout<<endl;
    }
    return 0;
}
