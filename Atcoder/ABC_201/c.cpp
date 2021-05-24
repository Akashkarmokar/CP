#include<bits/stdc++.h>
using namespace std;



void solve(){
    string s;cin>>s;
    int ans = 0;
    for(int i=0;i<=9999;i++){
        vector<bool>flag(10);
        int x = i;
        for(int j=0;j<4;j++){
            flag[x%10]=true;
            x/=10;
        }
        bool flag2 = true;
        for(int j=0;j<10;j++){
            if(s[j]=='o' && !flag[j]){
                flag2=false;
            }
            if(s[j]=='x' && flag[j]){
                flag2 = false;
            }
        }
        ans+=flag2;
    }
    cout<<ans<<endl;
}

int main()
{
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}