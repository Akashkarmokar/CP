#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double ans = 0;
    for(int i=1;i<n;i++)
    {
        ans= ans+ (double)(n)/(double)(n-i);
    }
    cout<<setprecision(10)<<ans<<endl;
    return 0;
}