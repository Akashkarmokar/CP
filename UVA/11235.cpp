#include<bits/stdc++.h>
using namespace std;

const int MX = 100002;
struct node
{
    int left_value,right_value;
    int left_most_frq,right_most_frq;
    int mxcnt;
};

int arr[MX];
struct node tree[4*MX];


void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].left_value=arr[b];
        tree[node].right_value=arr[b];
        tree[node].left_most_frq=1;
        tree[node].right_most_frq=1;
        tree[node].mxcnt = 1;
        return ;
    }
    int left = node*2,right=left+1,mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node].left_value = tree[left].left_value;
    tree[node].right_value = tree[right].right_value;
    tree[node].left_most_frq = tree[left].left_most_frq;
    tree[node].right_most_frq = tree[right].right_most_frq;
    tree[node].mxcnt = max(tree[left].mxcnt,tree[right].mxcnt);

    if(tree[left].right_value==tree[right].left_value)
    {
        tree[node].mxcnt= max(tree[node].mxcnt,tree[left].right_most_frq+tree[right].left_most_frq);
        if(tree[left].left_value==tree[left].right_value)
        {
            tree[node].left_most_frq+=tree[right].left_most_frq;
        }
        if(tree[right].left_value==tree[right].right_value)
        {
            tree[node].right_most_frq+=tree[left].right_most_frq;
        }
    }
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j || e<i)
    {
        return -1;
    }
    if(b>=i && e<=j)
    {
        return tree[node].mxcnt;
    }
    int left = node*2,right=left+1,mid=(b+e)/2;
    int query_of_left=query(left,b,mid,i,j);
    int query_of_right =query(right,mid+1,e,i,j);
    int ans=max(query_of_left,query_of_right);

    if(tree[left].right_value==tree[right].left_value)
    {
        int lc,rc;
        lc = min(mid-i+1,tree[left].right_most_frq);
        rc = min(j-mid,tree[right].left_most_frq);
        ans = max(ans,lc+rc);
    }
    return ans;
}
int main()
{
    int n,q;
    while(scanf("%d",&n) && n!=0)
    {
        memset(tree,0,sizeof(tree));
        scanf("%d",&q);
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        build(1,1,n);
        while(q--)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            int ans = query(1,1,n,x,y);
            printf("%d\n",ans);
        }
    }
    return 0;
}