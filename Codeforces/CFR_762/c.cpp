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
    long long a,s; cin>>a>>s;
    vector<int> b;
    while(s){
        int x = a%10;
        int y = s%10;
        if(x<=y){
            b.push_back(y-x);
        }else{
            s/=10;
            y+=10*(s%10);
            if(x<y && y>=10 && y<=18){
                b.push_back(y-x);
            }else{
                cout<<"-1"<<endl;
                return;
            }
        }
        a/=10;
        s/=10;
    }
    if(a){
        cout<<"-1"<<endl;
    }else{
        while(b.back()==0){
            b.pop_back();
        }
        for(int i=(int)b.size()-1;i>=0;i--){
            cout<<b[i];
        }
        cout<<"\n";
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