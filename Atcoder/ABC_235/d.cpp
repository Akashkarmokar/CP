/*
    @Author : Vyas
*/

#include "bits/stdc++.h"
#include <algorithm>
#include <cstring>
#include <queue>
#include <sstream>
#include <string>
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
    long long a,n;
    cin>>a>>n;
    long long m = 1;
    while(m<=n){
    	m*=10;
    }
    vector<long long> depth(m,-1);
    queue<long long> q;
    q.push(1);
    depth[1] = 0;
    while(!q.empty()){
    	
    	long long u = q.front();
    	long long du = depth[u];
    	q.pop();
    	if(u==n){
    		break;
    	}

    	// option 1:
    	long long op1 = u * a;
    	if(op1<m && depth[op1]==-1){
    		depth[op1] = du + 1;
    		q.push(op1);
    	}

    	// option 2:
    	int num = 0;
    	if(u>=10 and u%10!=0){
    		string b = to_string(u);
    		b = b[(int)b.size()-1] + b;
    		b.erase(b.size()-1);
    		long long opt2 = stoll(b);

    		if(opt2 < m && depth[opt2] == -1){
    			depth[opt2] = du + 1;
    			q.push(opt2);
    		}
    		num = opt2;
    	}
    	// cout<<op1<<" "<<num<<endl;
    }
    cout<<depth[n]<<endl;
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