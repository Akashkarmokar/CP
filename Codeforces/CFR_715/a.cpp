#include<bits/stdc++.h>
using namespace std;



// void solve(){
//     int n;cin>>n;
//     vector<int>v(n),ev,od;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         if(v[i]&1){
//             od.push_back(v[i]);
//         }else{
//             ev.push_back(v[i]);
//         }
//     }
//     for(auto it:ev){
//         cout<<it<<" ";
//     }
//     for(auto it:od){
//         cout<<it<<" ";
//     }
//     cout<<endl;
    
// }
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    partition(v.begin(),v.end(),[&](const int u){return u%2;});
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"\n";
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}