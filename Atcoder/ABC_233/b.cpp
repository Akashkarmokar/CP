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
 
void run_case(){
    int l,r;
    string s;
    cin>>l>>r>>s;
    l--;
    r--;
    while(l<=r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    cout<<s<<endl;
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