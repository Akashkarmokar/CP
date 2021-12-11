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
 
bool ans;
void check(vector<int>& v,int num){
	int n = v.size();
	vector<int> tmp;
	for(int i=0;i<n;i++){
		if(v[i]!=num){
			tmp.push_back(v[i]);
		}
	}
	for(int i=0;i<tmp.size();i++){
		if(tmp[i]!=tmp[tmp.size()-1-i]){
			return;
		}
	}
	ans = true;
}
void solve(){
    int n; cin>>n;
    ans = true;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }

    for(int i=0;i<n;i++){
    	if(v[i]!=v[n-1-i]){
    		ans = false;
    		check(v,v[i]);
    		check(v,v[n-1-i]);
    		break;
    	}
    }

    if(ans){
    	cout<<"YES"<<endl;
    }else{
    	cout<<"NO"<<endl;
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