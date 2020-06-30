#include "bits/stdc++.h"
using namespace std;

#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define loj(i,ans) (cout<<"Case "<<i<<": "<<ans<<endl)
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


const int Max = (int)2e5+5;

//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}

//direction arry
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

//____________________________________________________________________________________________________
ll fn(ll num)
{
    return (num*(2+((num-1)*2)))/2;
}

int main(){
	fastread;

    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n,m;cin>>n>>m;
        ll ans= (n/(2*m))*fn(m);
        loj(i,ans);
    }
	return 0;
}
