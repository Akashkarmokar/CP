#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i].first<v[j].first && v[i].second<v[j].second){
                if(binary_search(v.begin(),v.end(),make_pair(v[i].first,v[j].second)) && binary_search(v.begin(),v.end(),make_pair(v[j].first,v[i].second))){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    int tc = 1;
    // cin>>tc;

    while(tc--){
        run_case();
    }
    return 0;
}