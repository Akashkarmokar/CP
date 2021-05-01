#include<bits/stdc++.h>
using namespace std;

// void solve(){
//     int n;cin>>n;
//     vector<int>v(n);
//     for(auto &i:v){
//         cin>>i;
//     }
//     bool ok = true;
//     int i;
//     for(i=1;i<n-1;i++){
//         int j = i-1;
//         int k = i+1;
//         int a=-1,b=-1;
//         for(int j=i-1;j>=0;j--){
//             if(v[j]<v[i]){
//                 a = j+1;
//                 break;
//             }
//         }
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[i]){
//                 b = j+1;
//                 break;
//             }
//         }
//         // cout<<a<<" "<<b<<endl;
//         if(a!=-1 && b!=-1){
//             cout<<"YES"<<endl;
//             cout<<a<<" "<<i+1<<" "<<b<<endl;
//             ok = false;
//             break;
//         }

//     }
//     if(ok){
//         cout<<"NO"<<endl;
//     }
// }

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int &i:v)
        cin>>i;
    for(int i=1;i<n-1;++i){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}
int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}