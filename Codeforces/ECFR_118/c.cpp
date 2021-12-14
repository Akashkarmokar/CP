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
 
bool good(vector<long long>& v,long long& h, long long k){
	long long sum=0;
	for(int i=0;i<(int)v.size();i++){
		int delta = 0;
		if(i!=(int)v.size()-1){
			delta = v[i+1] - v[i];
			if(delta<k){
				sum+=delta;
			}else if(delta>=k){
				sum+=k;
			}
		}else{
			sum+=k;
		}
	}
	return (sum>=h);
}

void solve(){
    long long n,h; cin>>n>>h;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    long long l=0,r=1e18;
    long long mid = 0;
    while(r>l+1){
    	mid = (l+r)>>1;
    	if(good(v, h, mid)){
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