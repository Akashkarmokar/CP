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


void div(int l,int r,vector<int>& a,vector<int>& depth,int curDepth = 0){
	if(r<l){
		return;
	}
	if(l==r){
		depth[l] = curDepth;
		return;
	}

	int maxIndex = l;
	for(int i=l+1;i<=r;i++){
		if(a[maxIndex]<a[i]){
			maxIndex = i;
		}
	}

	depth[maxIndex] = curDepth;
	div(l,maxIndex-1,a,depth,curDepth+1);
	div(maxIndex+1,r,a,depth,curDepth+1);
}

void run_case(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    vector<int>d(n);
    div(0,n-1,a,d);
    for(int i=0;i<n;i++){
    	cout<<d[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc=1;
    cin>>tc;
    while(tc--){
        run_case();
    }
    return 0;
}