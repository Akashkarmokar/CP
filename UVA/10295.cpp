#include<bits/stdc++.h>
using namespace std;
#define nl printf("\n");

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
    int n,m;
    cin>>n>>m;
    map<string,long long>mp;
    for(int i = 1 ;i<=n;i++)
    {
        string s;
        long long n;
        cin>>s;
        cin>>n;
        mp[s]=n;
    }
    for(int i = 1;i<=m;i++)
    {
        long long  total = 0;
        string temp;
        while(cin>>temp && temp!=".")
        {
            total = total + mp[temp];
        }
        cout<<total<<endl;
    }
    return 0;
}