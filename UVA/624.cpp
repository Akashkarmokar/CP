#include<bits/stdc++.h>
using namespace std;
#define nl printf("\n");

int n,m,best;
int arr[25];
vector<int>bestpath;

void dfs(vector<int>v,int sum ,int index )
{
    sum += arr[index];
    v.push_back(arr[index]);
    if(sum>best || (sum==best && v.size()>bestpath.size()))
    {
        best = sum ;
        bestpath = v;
    }
    for(int i = index+1;i<m;i++)
    {
        if(sum+arr[i]<=n)
        {
            dfs(v,sum,i);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
    while(cin>>n>>m)
    {
        for(int i = 0 ;i<m;i++) cin>>arr[i];
        best = 0 ;
        for(int i = 0 ;i<m;i++)
        {
            vector<int>tmp;
            dfs(tmp,0,i);
        }
        for(int i = 0;i<bestpath.size();i++)
        {
            cout<<bestpath[i]<<" ";
        }
        cout<<"sum:"<<best;nl;
    }
    return 0;
}