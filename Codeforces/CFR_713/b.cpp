#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n;cin>>n;
    vector<string>v(n);
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]=='*'){
                p.push_back(make_pair(i,j));
            }
        }
    }
    p.push_back(p[0]);
    p.push_back(p[1]);
    if(p[0].first==p[1].first){
        p[2].first = (p[2].first+1)%n;
        p[3].first = (p[3].first+1)%n;
    }else if(p[0].second == p[1].second){
        p[2].second = (p[2].second+1)%n;
        p[3].second = (p[3].second+1)%n;
    }else{
        swap(p[2].first,p[3].first);
    }
    v[p[2].first][p[2].second] = '*';
    v[p[3].first][p[3].second] = '*';
    for(int i = 0;i<n;i++){
        cout<<v[i]<<'\n';
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}