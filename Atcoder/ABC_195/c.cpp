#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans = 0;
    long long x = 1000;
    while(n>=x)
    {
        ans+=n-x+1;
        x*=1000;
    }
    cout<<ans<<endl;
    return 0;
}