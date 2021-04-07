#include<bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;
    int len = s.size();
    bool ok = false;
    int idx;
    for(int i=0;i<len;i++){
        if(s[abs(len-i-1)]!='a'){
            ok = true;
            idx = i;
            break;
        }
    }
    // cout<<idx<<endl;
    if(ok){
        cout<<"YES"<<endl;
        for(int i=0;i<idx;i++){
            cout<<s[i];
        }
        cout<<'a';
        for(int i=idx;i<len;i++){
            cout<<s[i];
        }
        cout<<"\n";
    }
    else{
        cout<<"NO"<<endl;
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