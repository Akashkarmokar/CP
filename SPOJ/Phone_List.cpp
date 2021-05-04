#include<bits/stdc++.h>
using namespace std;

struct node{
    bool end;
    node* next[10];
    node(){
        end = false;
        for(int i=0;i<10;i++){
            next[i] = NULL;
        }
    }
}* root;




void insert(string& s,bool &ok){
    node* cur = root;
    for(int i=0;i<s.size();i++){
        int id = s[i]-'0';
        if(cur->next[id]==NULL){
            cur->next[id] = new node();
        }
        cur = cur->next[id];
        if(cur->end==true){
            ok = false;
        }
    }
    cur->end = true;
    for(int i=0;i<10;i++){
        if(cur->next[i]){
            ok = false;
        }
    }
}


void del(node* cur){
    for(int i=0;i<10;i++){
        if(cur->next[i]){
            del(cur->next[i]);
        }
    }
    delete cur;
}


void solve(){
    root = new node();
    int query;cin>>query;
    bool ok = true;
    for(int i=0;i<query;i++){
        string s;cin>>s;
        insert(s,ok);
    }
    if(ok==false){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    del(root);
}

int main()
{
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}