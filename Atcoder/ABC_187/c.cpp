#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    set<string>a,d;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i][0]=='!'){
            v[i].erase(v[i].begin()+0);
            d.insert(v[i]);
        }
        else{
            a.insert(v[i]);
        }
    }
    string ans;
    bool ok = true;
    for(auto it:a)
    {
        if(d.find(it)!=d.end())
        {
            ans = it;
            ok = false;
            break;
        }
    }
    if(!ok){
        cout<<ans<<endl;
    }
    else{
        cout<<"satisfiable"<<endl;
    }
    
    
    return 0;
}