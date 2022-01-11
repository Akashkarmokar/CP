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

long long getStudentNum(vector<long long>& a,long long num){
	int n = (int)a.size();
	int l = -1;
	int r = n;
	while(r>l+1){
		long long mid = (l+r)>>1;
		if(a[mid]>= num){
			r = mid;
		}else{
			l = mid;
		}
	}
	return (r==n?0:n-r);
}

void run_case(){
    long long n,q; cin>>n>>q;
    vector<long long> a(n);
    for(int i=0;i<n;i++){ cin>>a[i]; }
    sort(a.begin(),a.end());
	while(q--){
		long long x; cin>>x;
		cout<<getStudentNum(a,x)<<endl;
	}


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