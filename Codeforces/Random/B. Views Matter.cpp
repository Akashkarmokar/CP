#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,y=0,sum =0;
    cin>>n>>m;
    long long arra[n];
    for(long long i=0;i<n;i++){
        cin>>arra[i];
        sum+=arra[i];
    }
    sort(arra,arra+n);
    for(long long i =0;i<n;i++){
        if(arra[i]>y){
            y++;
        }
    }
    long long ans  = sum - (n+arra[n-1]-y);
    cout<<ans<<endl;
    return 0;
}
