/*
    Author : UntilOver
    Topic: 
    Prerequisite:
    Algorithm:
    TimeComplexity:
*/




#include "bits/stdc++.h"
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
 
 
void solve(){
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
    	int x; cin>>x;
    	v.push_back({x,i});
    }
    long long totalWalk = 0;
    vector<int> cordinates(n+1,0);
    sort(v.rbegin(),v.rend());
    for(int i=1;i<=n;i++){
    	cordinates[v[i-1].second] = (i+1)/2*(i&1?1:-1);
    	totalWalk+=(2LL*((i+1)/2)*v[i-1].first);
    }
    cout<<totalWalk<<"\n";
    for(auto it:cordinates){
    	cout<<it<<" ";
    }
    cout<<"\n";
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