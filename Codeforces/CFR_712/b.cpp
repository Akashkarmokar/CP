#include<bits/stdc++.h>
using namespace std;


bool arr[300005];

void solve(){
    int n;cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int one = 0;
    int zero = 0;
    bool arr[n+1];
    for(int i=0;i<n;i++){
        if(s1[i]=='0'){
            zero++;
        }else{
            one++;
        }
        if(zero==one){
            arr[i] = true;
        }
        else{
            arr[i] = false;
        }
    }
    int same = 0;
    int flip = 0;
    bool ok = true;
    for(int i=n-1;i>=0 & ok;i--){
        char a;
        if(flip%2==0){
            a = s1[i];
        }else{
            a = (s1[i]=='1'?'0':'1');
        }
        if(a==s2[i]){
            same++;
            continue;
        }
        if(a!=s2[i] && arr[i]==true){
            flip++;
            same++;
        }
        else{
            ok = false;
            break;
        }
    }
    // cout<<ok<<endl;
    if(ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}



