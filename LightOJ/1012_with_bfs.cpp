#include<bits/stdc++.h>
using namespace std;

#define sz 25
char land[sz][sz];
bool visited[sz][sz];
int row,column,n;
int X[]={0,0,1,-1};
int Y[]={1,-1,0,0};
#define BOUNDARY(i,j) ((i>=0 && i<row) && (j>=0 && j<column))

void bfs(int x,int y)
{
    queue<pair<int,int>>q;
    q.push(make_pair(x,y));
    n++;
    visited[x][y]=1;
    while(!q.empty())
    {
        pair<int,int>node = q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int new_x = node.first+X[i];
            int new_y = node.second+Y[i];
            // cout<<new_x<<" "<<new_y<<endl;
            if(BOUNDARY(new_x,new_y) && land[new_x][new_y]=='.' && !visited[new_x][new_y])
            {
                n++;
                visited[new_x][new_y]=1;
                q.push(make_pair(new_x,new_y));
            }
        }
    }
}

int main()
{
    int tc;cin>>tc;
    for(int testcase=1;testcase<=tc;testcase++)
    {
        cin>>column>>row;
        int initial_x,initial_y;
        for(int i= 0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>land[i][j];
                if(land[i][j]=='@')
                {
                    initial_x = i;
                    initial_y = j;
                }
            }
        }
        n = 0;
        bfs(initial_x,initial_y);
        cout<<"Case "<<testcase<<": "<<n<<endl;
        memset(visited,0,sizeof visited);
    }
    return 0;
}