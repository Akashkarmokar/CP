#include<bits/stdc++.h>

using namespace std;
int vessel[1100];
int n,m;

int container(int capacity)
{
    int counter =1 , poured = 0 ;
    for(int i = 0 ;i<n;i++)
    {
        if(vessel[i]>capacity) return INT_MAX;
        if(poured+vessel[i]<=capacity)poured+=vessel[i];
        else poured = vessel[i],counter++;
    }
    return counter;
}
int binary()
{
    int low , high ,mid ;
    low = 0 ;
    high = 1000000000;
    for(int i = 0 ;i<100;i++)
    {
        mid = (low + high)/2;
        if(container(mid)<=m) high = mid;
        else low = mid + 1 ;
    }
    return mid ;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
// #endif
    int tc;
    cin>>tc;
    for(int i = 1 ;i<=tc;i++)
    {
        cin>>n>>m;
        for(int j = 0 ;j<n ;j++)
        {
            cin>>vessel[j];
        }
        cout<<"Case "<<i<<": "<<binary()<<endl;
    }
     
    
    return 0 ;
}