#include "bits/stdc++.h"
using namespace std;

#define nl '\n'
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define boundary(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

 
const int Max = (int)2e5+5;
 
//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
//direction arry
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {+0, +0, +1, -1};
int dy4[] = {+1, -1, +0, +0};
 
//____________________________________________________________________________________________________
int row,col;
int grid[105][105];

void solve()
{
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cin>>grid[i][j];
        }
    }

    bool visit[105][105]={0};
    int ans = 0;
    queue<pair<int,int>>q;
    q.push(make_pair(1,1));
    visit[1][1]=true;
    while(!q.empty())
    {
        pair<int,int> u = q.front();
        q.pop();
        int tmp_cnt = 0;
        int mn = 1e4+5;
        for(int i=0;i<4;i++)
        {
            int new_x = u.first+dx4[i];
            int new_y = u.second+dy4[i];
            if(boundary(new_x,new_y))
            {
                tmp_cnt++;
                if(!visit[new_x][new_y])
                {
                    q.push(make_pair(new_x,new_y));
                    visit[new_x][new_y]=true;
                }

                if(grid[new_x][new_y]>grid[u.first][u.second])
                {
                    mn = min(mn,grid[new_x][new_y]);
                    
                }
                if(grid[new_x][new_y]<=grid[u.first][u.second])
                {
                    if((new_x==1||new_x==row) ||(new_y==1 || new_y==col))
                    {
                        tmp_cnt--;
                    }
                }
            }
        }
        if(tmp_cnt==4)
        {
            // debug(u.first);
            // debug(u.second);
            // debug(mn-grid[u.first][u.second]);
            ans+=(mn-grid[u.first][u.second]);
            grid[u.first][u.second]=mn;
        }
    }
    cout<<ans<<nl;
}
int main()
{
    fastread;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}

