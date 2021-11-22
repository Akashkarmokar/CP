/*
    Author : UntilOver
    Topic: 
    Prerequisite:
    Algorithm:
    TimeComplexity:
*/




#include "bits/stdc++.h"
#include <vector>
using namespace std;
 
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
const int Max = (int)2e5+5;
 
//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
//direction arry
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
//____________________________________________________________________________________________________
 
 
vector<int>mark;
void solve(){
    int n,a,b; cin>>n>>a>>b;
    mark.assign(n+1,0);
    vector<int> left,right;
    left.push_back(a);
    right.push_back(b);
    mark[a] = 1;
    mark[b] = 1;
    for(int i = b+1;i<=n*2 && left.size()<n/2;i++){
        int val = i%n;
        int idx = val==0?n:val;
        if(mark[idx] == 0 && idx>a){
            left.push_back(idx);
            mark[idx] = 1;
        }
    }
    for(int i = 1;i<=n && right.size()<n/2;i++){
        if(mark[i] == 0 && i<b){
            right.push_back(i);
            mark[i] = 1; 
        }
    }
    if(left.size()+right.size() == n){
        for(auto it:left){
            cout<<it<<" ";
        }
        for(auto it:right){
            cout<<it<<" ";
        }
        cout<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
 
int main(){
    fastread;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}