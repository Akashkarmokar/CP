#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    string s;cin>>s;
    int len = s.size();
    for(int time = 0;time <2;time++){
        for(int i=0;i<len;i++){
            int j = len - i - 1;
            if(s[i]!='?'){
                if(s[j]=='?'){
                    s[j] = s[i];
                }else if(s[i]!=s[j]){
                    cout<<"-1"<<endl;
                    return ;
                }
            }
        }
        reverse(s.begin(),s.end());
    }
    a-= count(s.begin(),s.end(),'0');
    b-= count(s.begin(),s.end(),'1');
    int ques = count(s.begin(),s.end(),'?');
    bool mid = (len%2==1 && s[len/2]=='?');
    if(a<0 || b<0 || a+b!=ques || (mid && a%2==0 && b%2==0)){
        cout<<"-1"<<endl;
        return ;
    }

    if(a%2 ==1 || b%2==1){
        int md = len/2;
        if(s[md]!='?'){
            cout<<"-1"<<endl;
            return ;
        }
        s[md] = (a%2==1?'0':'1');
        if(a%2==1){
            a--;
        }else{
            b--;
        }
    }
    if(a%2==1 || b%2==1){
        cout<<"-1"<<endl;
        return;
    }
    for(int i=0;i<len;i++){
        if(s[i]=='?'){
            int j = len - i -1;
            if(a>0){
                s[i]=s[j] = '0';
                a-=2;
            }else{
                s[i]=s[j] = '1';
                b-=2;
            }
        }
    }
    cout<<s<<endl;



}

int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}