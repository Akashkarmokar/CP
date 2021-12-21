/*
    Author : UntilOver
    Topic: 
    Prerequisite:
    Algorithm:
    TimeComplexity:
*/




#include "bits/stdc++.h"
#include <algorithm>
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
    string a,s;
    cin>>a>>s;
    string ans = "";
    int l = a.size()-1;
    int r = s.size()-1;;
    if(r<l){
    	cout<<"-1"<<endl;
    	return ;
    }
    
    bool ok = true;
    while(1){
    	// cout<<l<< " "<<r<<endl;
    	// cout<<a[l]<<" "<<s[r]<<endl;
    	if(r<0 && l>=0){
    		ok = false;
    		break;
    	}
    	int numS = s[r] - '0';
    	int numA = a[l] - '0';
    	int delta = numS - numA;
    	// cout<<delta<<endl;

    	if(delta<0){
    		int x = (10+abs(numS)) - numA;
    		ans+=(x+'0');
    		if(s[r-1]!='1'){
    			ok = false;
    			break;
    		}
    		r=r-2;
    		l--;
    	}else{
    		ans+=(delta+'0');
    		l--;
    		r--;
    	}
    	if(l<0 || r<0){
    		break;
    	}
    }
    // cout<<"R"<<r<<endl;
    if(l>=0 && r<0){
    	cout<<"-1"<<endl;
    	return;
    }
    if(ok){
    	if(r+1){
    		for(int i=0;i<r+1;i++){
    			ans+=s[i];
    		}
    	}
    	reverse(ans.begin(), ans.end());
    	int pos = 0;
    	while(ans[pos]=='0'){
    		ans.erase(pos,1);
    	}
    	cout<<ans<<endl;
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