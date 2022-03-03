/*
    @Author : Vyas
*/

#include "bits/stdc++.h"
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
    string s;
    cin>>s;
    int l = 0;
    int r = s.size() -1;
    int x = 0;
    while(s[r]=='a' && l<=r){
    	r--;
    	x++;
    }
    while(l<=r && s[l]=='a' && x--){
    	l++;
    }
    bool ok = true;
    while(l<=r){
    	if(s[l]!=s[r]){
    		ok = false;
    		break;
    	}
    	l++;
    	r--;
    }
    cout<<(ok?"Yes":"No")<<endl;
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