#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int ans = 0;
    for(int i=0;i+4<=(int)s.size();i++){
        if(s[i]=='Z' && s[i+1]=='O' && s[i+2]=='N' && s[i+3]=='e'){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}