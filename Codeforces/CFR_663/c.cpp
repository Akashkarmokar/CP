#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin>>n;
    ll permu_n=1,unimodal_permu=1;
    for(int i=1;i<=n;i++)
    {
        permu_n=(permu_n*i)%mod;
        if(i<n)
            unimodal_permu=(unimodal_permu*2)%mod;
    }
    cout<<(permu_n-unimodal_permu+mod)%mod<<endl;
    return 0;
}