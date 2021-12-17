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
    int n; cin>>n;
    for(int a=2;a<=n;a++){
    	int b = n-a-1;
    	if(a!=b && __gcd(a,b)==1){
    		cout<<a<<" "<<b<<" "<<1<<"\n";
    		return;
    	}
    }
}
/*
Idea: N is a positive number . represent N as a two co prime Number ;
	How to represent N as sum of two co prime number:
	Source Link:  https://math.stackexchange.com/questions/3041656/sum-of-two-co-prime-integers
void solve(){
    int n; cin>>n;
    n--;
    if(n&1){
    	cout<<n-2<<" "<<2<<" "<<1<<endl;
    }else{
    	int quo = n/2;
    	if(quo&1){
    		cout<<quo-2<<" "<<quo+2<<" "<<1<<endl;
    	}else{
    		cout<<quo-1<<" "<<quo+1<<" "<<1<<endl;
    	}
    }
}
*/
int main(){
    fastread;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}	

