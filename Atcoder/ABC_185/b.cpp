#include<bits/stdc++.h>
using namespace std;

int take(){
    int n;cin>>n;
    return n;
}

int main()
{
    int n,m,t;
    cin>>n>>m>>t;
    int last_time = 0;
    int cur = n;
    bool res = true;
    for(int i=0;i<=m;i++){
        int a,b;
        a = i<m?take():t;
        b = i<m?take():t;
        cur-=a-last_time;
        if(cur<=0){
            res = false;
        }
        cur=min(n,cur+b-a);
        last_time = b;
    }
    if(res){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}