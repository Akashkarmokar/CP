#include<bits/stdc++.h>
using namespace std;
 
const int MX=140000;
int arr[MX];
 
struct node
{
    int val,flag;
}tree[4*MX];
 
 
void build(int cur_node,int begining,int ending)
{
    if(begining==ending)
    {
        tree[cur_node].val=arr[begining];
        tree[cur_node].flag=0;
        return;
    }
    int left = cur_node*2,right=cur_node*2+1,mid=(begining+ending)/2;
    build(left,begining,mid);
    build(right,mid+1,ending);
    tree[cur_node].flag=tree[left].flag+1;
    if(tree[cur_node].flag&1)
    {
        tree[cur_node].val=tree[left].val | tree[right].val;
    }
    else
    {
        tree[cur_node].val = tree[left].val ^ tree[right].val;
    }
}
 
void update(int cur_node,int begining,int ending,int update_at,int newvalue)
{
    if(begining>update_at || ending<update_at)
    {
        return ;
    }
    if(begining==ending)
    {
        tree[cur_node].val=newvalue;
        return;
    }
    int left = cur_node*2,right=left+1,mid=(begining+ending)/2;
    if(update_at<=mid)
        update(left,begining,mid,update_at,newvalue);
    else
        update(right,mid+1,ending,update_at,newvalue);
    if(tree[cur_node].flag&1)
        tree[cur_node].val=tree[left].val | tree[right].val;
    else
        tree[cur_node].val = tree[left].val ^ tree[right].val;
}
 
int main()
{
    int n,m;
    cin>>n>>m;
    n=1<<n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    build(1,1,n);
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        update(1,1,n,x,y);
        cout<<tree[1].val<<endl;        
    }
    return 0;
}