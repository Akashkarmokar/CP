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
 

int fun(int x,int x1,int y1){
    int y = ((x1+y1)-2*x)/2;
    return y;
}


void solve(){
    int x1,y1; cin>>x1>>y1;
    int l = 0;
    int r = x1;
    int mid = 0;
    bool ans = false;
    int ansx = 0;
    int ansy = 0;
    while(r>=l){
        int mid = (l+r)/2;
        int y = fun(mid,x1,y1);
        if(mid+y==abs(x1-mid)+abs(y1-y)){
            ans = true;
            ansx = mid;
            ansy = y;
            break;
        }
        else if(mid+y<abs(x1-mid)+abs(y1-y)){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    if(ans){
        cout<<ansx<<" "<<ansy<<endl;
    }else{
        cout<<"-1"<<" "<<"-1"<<endl;
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