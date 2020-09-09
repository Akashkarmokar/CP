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

bool check(int r,int g,int b,int w)
{
    if(( (r&1)+(g&1)+(b&1)+(w&1))>1)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
void solve()
{
    int r,g,b,w;
    cin>>r>>g>>b>>w;
    if(check(r,g,b,w))
    {
        cout<<"Yes"<<endl;
    }
    else if(r && g && b && check(r-1,g-1,b-1,w+3))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    

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