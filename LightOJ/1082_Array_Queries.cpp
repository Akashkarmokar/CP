#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int Max = 1e5+5;
ll mn = 1e5+5;

int arr[Max];
int tree[4*Max];


int init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return arr[b];
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    int x=init(left,b,mid);
    int y=init(right,mid+1,e);
    tree[node]=min(x,y);
    return tree[node];
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
    {
        return INT_MAX;
    }
    if(i<=b && e<=j)
    {
        return tree[node];
    }
    int left = node * 2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        init(1,1,n);
        printf("Case %d:\n",i);
        while(q--)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            // mn = 1e5+5;
            printf("%d\n",query(1,1,n,x,y));
        }
    }
    return 0;
}