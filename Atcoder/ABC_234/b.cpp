/*
    @Author : Vyas
*/

#include "bits/stdc++.h"
#include <cmath>
#include <cstdlib>
using namespace std;

#define debug(x) { cerr << #x << " = " << x << endl; }


const int Max = (int)2e5+5;

long long lcm(long long a,long long b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

double getDistance(int a,int b,int c,int d){
	long long val = abs(a-c)*abs(a-c) + abs(b-d)*abs(b-d);
	return sqrt(val);
}
void run_case(){
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
    	int x,y; cin>>x>>y;
    	a[i] = {x,y};
    }
    sort(a.begin(),a.end());
    double ans = getDistance(a[0].first,a[0].second,a[n-1].first,a[n-1].second);
    cout<<ans<<endl;
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