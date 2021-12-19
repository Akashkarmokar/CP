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
 
long long get(long long x){
	return x * 1ll * (x+1)/2;
}
void solve(){
	long long k,x;
	cin>>k>>x;
	long long l = 0,r = 2*k-1;
	bool greater = false;
	while(r>l+1){
		long long mid = (l+r)>>1;
		if(mid>k){
			greater = (get(k) + get(k-1) - get((2*k)-1 - mid) >= x);
		}else{
			greater = (get(mid)>=x);
		}
		if(greater){
			// ans = mid;
			r = mid;
		}else{
			l = mid;
		}
	}
	cout<<r<<endl;

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