#include<bits/stdc++.h>
using namespace std;

#define sz 510
#define BOUNDARY(i,j) ((i>=0 && i<row)&&(j>=0 && j<column))
int X[]={+0,+0,+1,-1};
int Y[]={+1,-1,+0,+0};
char land[sz][sz];
int visit[sz][sz];
int row,column;
vector<pair<int,int>>pos;
enum {sheep,wolf,dog};

bool fn(pair<int,int>node)
{
    //visit[node.first][node.second]=wolf;
    for(int i=0;i<4;i++)
    {
        int adj_node_x = node.first+X[i];
        int adj_node_y = node.second+Y[i];
        if(land[adj_node_x][adj_node_y]=='.' && BOUNDARY(adj_node_x,adj_node_y))
        {
            land[adj_node_x][adj_node_y]='D';
        }
        else if(land[adj_node_x][adj_node_y]=='S' && BOUNDARY(adj_node_x,adj_node_y))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin>>row>>column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>land[i][j];
            if(land[i][j]=='W')
            {
                pos.push_back(make_pair(i,j));
            }
        }
    }
    bool ok = true;
    for(int i=0;i<pos.size();i++)
    {
        pair<int,int>node=pos[i];
        if(fn(node)==false)
        {
            ok = false;
            break;
        }
    }
    if(ok)
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<land[i][j];
            }
            cout<<endl;
        }
    }
    else
        cout<<"No"<<endl;
    return 0;
}
