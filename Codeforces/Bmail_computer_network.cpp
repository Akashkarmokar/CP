#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n+1);
    for(int i=2;i<=n;i++){
        cin>>v[i];
    }
    
    int cur=n;
    vector<int>ans;
    while(cur!=0){
        ans.push_back(cur);
        cur = v[cur];
    }
    reverse(ans.begin(),ans.end());
    for(int i:ans)
        cout<<i<<" ";
    return 0;
}