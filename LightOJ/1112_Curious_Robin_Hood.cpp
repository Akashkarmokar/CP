#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int Max=1e5+5;

ll sack[Max];
ll tree[4*Max];
void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=sack[b];
        return ;
    }
    ll left = (node*2),right=(node*2)+1,mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}

void update (int node,int b,int e,int i)
{
    if(i<b || i>e)
    {
        return ; // out of range
    }
    if(b==e)
    {
        tree[node] = sack[b];
        return ;
    }
    int left = node*2;
    int right = left + 1; // node*2 + 1;
    int mid = (b+e)/2;
    update(left,b,mid,i);
    update(right,mid+1,e,i);
    tree[node]=tree[left]+tree[right];
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
    {
        return 0;
    }
    if(i<=b && e<=j)
    {
        return tree[node];
    }
    ll left = (node*2),right=(node*2)+1,mid=(b+e)/2,p1,p2;
    p1=query(left,b,mid,i,j);
    p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&sack[j]);
        }
        memset(tree,0,sizeof(tree));
        build(1,0,n-1);
        printf("Case %d:\n",i);
        while(q--)
        {
            ll x,y,z;
            scanf("%lld",&x);
            if(x==1)
            {
                scanf("%lld",&y);
                printf("%lld\n",sack[y]);
                sack[y]=0;
                update(1,0,n-1,y);
            }
            if(x==2)
            {
                scanf("%lld %lld",&y,&z);
                sack[y]+=z;
                update(1,0,n-1,y);
            }
            if(x==3)
            {
                scanf("%lld %lld",&y,&z);
                printf("%lld\n",query(1,0,n-1,y,z));
            }
        }
    }
    return 0;
}