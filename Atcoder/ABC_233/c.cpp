/*
    @Author : Vyas
*/
 
#include "bits/stdc++.h"
#include <algorithm>
using namespace std;
 
#define debug(x) { cerr << #x << " = " << x << endl; }
 
 
const int Max = (int)2e5+5;
 
long long lcm(long long a,long long b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
 
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
long long n,x, ans = 0;
vector<vector<long long>> a;
void dfs(long long pos,long long prod){
    if(pos==n){
        if(prod == x){
            ans++;
        }
        return ;
    }
    for(auto it: a[pos]){
        if(prod*it > x){
            continue;
        }
        dfs(pos+1,prod*it);
    }
}
void run_case(){
    cin>>n>>x;
    a.resize(n);
    for(long long i=0;i<n;i++){
        long long l; cin>>l;
        a[i].resize(l);
        for(long long j=0;j<l;j++){
            cin>>a[i][j];
        }
    }
    dfs(0,1);
    cout<<ans<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc=1;
    // cin>>tc;
    while(tc--){
        run_case();
    }
    return 0;
}