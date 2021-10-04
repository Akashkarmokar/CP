#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin>>n;
    bool ok = true;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(m.find(x)!=m.end()){
            ok =false;
        }else{
            m[x]++;
        }
    }
    if(ok){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}