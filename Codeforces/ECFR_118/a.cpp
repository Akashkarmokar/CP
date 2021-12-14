/*
    Author : UntilOver
    Topic: 
    Prerequisite:
    Algorithm:
    TimeComplexity:
*/




#include "bits/stdc++.h"
#include <math.h>
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
    long long x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    long long mn = min(p1,p2);
    p1-=mn;
    p2-=mn;
    if(p1>=7){
    	cout<<">"<<endl;
    }else if(p2>=7){
    	cout<<"<"<<endl;
    }else{
    	for(int i=0;i<p1;i++)x1*=10;
    	for(int i=0;i<p2;i++)x2*=10;
    	if(x1<x2){
    		cout<<"<"<<endl;
    	}else if(x1>x2){
    		cout<<">"<<endl;
    	}else{
    		cout<<"="<<endl;
    	}
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