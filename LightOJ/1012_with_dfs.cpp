// solution with DFS

#include<bits/stdc++.h>
using namespace std;

#define sz 25
#define BOUNDARY(i,j) ((i>=0 && i<row)&&(j>=0 && j<column))
char land[sz][sz];
bool visited[sz][sz];
int row,column,n;
int X[]={0,0,1,-1};
int Y[]={-1,1,0,0};

void dfs(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        if(BOUNDARY(x+X[i],y+Y[i]) && land[x+X[i]][y+Y[i]]=='.' && !visited[x+X[i]][y+Y[i]])
        {
            visited[x+X[i]][y+Y[i]]=true;
            n++;
            dfs(x+X[i],y+Y[i]);
        }
    }
}

int main()
{
    int tc;cin>>tc;
    for(int testcase=1;testcase<=tc;testcase++)
    {
        cin>>column>>row;
        int intlx,intly;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>land[i][j];
                if(land[i][j]=='@')
                {
                    intlx=i;
                    intly=j;
                    visited[i][j]=true;
                }
            }
        }
        n=1;
        dfs(intlx,intly);
        cout<<"Case "<<testcase<<": "<<n<<endl;
        memset(visited,0,sizeof visited);
    }
    return 0;
}
