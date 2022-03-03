#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    multiset<int>nums;
    for(int i=1;i<=n;i++){
        nums.insert(i);
    }
    vector<pair<int,int>> ans;
    for(int i=0;i<n-1;i++){
        auto it = nums.end();
        it--;
        int a = *it;
        nums.erase(it);
        it=nums.end();
        it--;
        int b = *it;
        nums.erase(it);
        nums.insert((a+b+1)/2);
        ans.push_back(make_pair(a,b));
    }
    cout<<*nums.begin()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
}

int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}