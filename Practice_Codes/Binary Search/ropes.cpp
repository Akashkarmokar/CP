#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int>a;
bool good(double m)
{
    int sum = 0;
    for(int i=0;i<n;i++)
        sum+=a[i]/m;
    return sum>=k;
}

int main()
{
    cin>>n>>k;
    a.resize(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    double l = 0,r=1e8,mid;
    for(int i=1;i<47;i++)
    {
        mid = (r+l)/2;
        if(good(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout<<setprecision(20)<<l<<"\n";
    return 0;
}