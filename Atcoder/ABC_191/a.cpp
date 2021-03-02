#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,t,s,d;
    cin>>v>>t>>s>>d;

    int x = v*t;
    int y = v*s;
    if(d>=x && d<=y)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}