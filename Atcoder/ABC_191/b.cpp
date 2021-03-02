#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t!=x)
            cout<<t<<" ";
    }
    return 0;
}