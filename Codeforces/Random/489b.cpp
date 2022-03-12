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
    int n; cin>>n;
    vector<int> boys(n);
    for(int i=0;i<n;i++){
    	cin>>boys[i];
    }
    int m; cin>>m;
    vector<int> girls(m);
    for(int i=0;i<m;i++){
    	cin>>girls[i];
    }


    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());

    int ans = 0;

    int l = 0;
    int r = 0;
    
    while(l<n && r<m){
    	if(abs(boys[l] - girls[r])<=1){
    		ans++;
    		l++;
    		r++;
    	}else{
    		if(boys[l] < girls[r]){
    			l++;
    		}else{
    			r++;
    		}
    	}
    }
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