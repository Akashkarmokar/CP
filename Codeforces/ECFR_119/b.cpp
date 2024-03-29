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
    long long w,h; cin>>w>>h;
    long long ans = 0;
    for(int i=0;i<2;i++){
    	for(int j = 0;j<2;j++){
    		int k; cin>>k;
    		vector<long long> points(k);
    		for(int i=0;i<k;i++){
    			cin>>points[i];
    		}
    		ans = max(ans,(points.back()-points.front())*(i==0?h:w));
    	}
    }
    cout<<ans<<endl;
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