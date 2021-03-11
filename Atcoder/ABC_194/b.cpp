#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    long long ans = 2e5+5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            if(i==j)
            {
                long long sum = v[i].first + v[j].second;
                ans = min(ans,sum);
            }
            else
            {
                long long xx = max(v[i].first,v[j].second);
                ans = min(ans,xx);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}