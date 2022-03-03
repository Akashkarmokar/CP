#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    int ans = 1;
    int i = s.find_first_of('*');
    while(true){
        int j = min(n-1,i+k);
        for(;i<j && s[j]=='.';j--){}
        if(i==j){
            break;
        }
        ans++;
        i = j;
    }
    cout<<ans<<"\n";
}
 
 
 
int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}