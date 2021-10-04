#include<bits/stdc++.h>
using namespace std;

int arr[5005];



int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    double ans = 0.0;
    for(int i=k;i<=n;i++){
        for(int j=i;j<=n;j++){
            double s = arr[j] - arr[j-i];
            s/=i;
            ans = max(ans,s);
        }
    }
    cout<<setprecision(10)<<ans<<endl;
    return 0;
}