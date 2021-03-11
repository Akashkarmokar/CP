#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long>v(401,0);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        x+=200;
        v[x]++;
    }
    long long ans = 0;
    for(long long i=0;i<401;i++)
    {
        for(long long j=i;j<401;j++)
        {
            ans+=v[i]*v[j]*(j-i)*(j-i);
        }
    }
    cout<<ans<<endl;
    return 0;
}