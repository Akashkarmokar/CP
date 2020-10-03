#include "bits/stdc++.h"
using namespace std;

#define nl '\n'
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
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

void solve()
{
    int n,T;
    cin>>n>>T;
    int x = 0,xx=1;
    for(int i = 0;i<n;i++)
    {
        int tmp;cin>>tmp;
        
        if(T%2==0 && tmp== T/2)
        {
            xx = xx^1;
            x = xx;
        }
        else if(tmp*2<T)
        {
            x = 0;
        }
        else
        {
            x = 1;
        }
        cout<<x<<" ";
    }
    cout<<endl;
    
}
int main()
{
    fastread;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}