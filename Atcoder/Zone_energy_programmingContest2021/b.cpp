#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,D,H;
    cin>>N>>D>>H;
    vector<int>dis(N),hig(N);
    double ans = 0.0;
    for(int i=0;i<N;i++){
        cin>>dis[i]>>hig[i];
        double h_prm =  ((H-hig[i])*(1.0)*D)/(D-dis[i]);
        ans = max(ans,H-h_prm); 
    }
    cout<<ans<<endl;
    return 0;
}