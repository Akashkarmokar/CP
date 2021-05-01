#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    int x=0,y=10005;
    for(int &i:a){
        cin>>i;
        x = max(x,i);
    }
    for(int &i:b){
        cin>>i;
        y = min(y,i);
    }
    if(x>y){
        cout<<0<<endl;
    }else{
        cout<<y-x+1<<endl;
    }
}

int main()
{
    int tc = 1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}