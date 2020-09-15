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

int row[102],col[102];

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='*')
            {
                row[i]++;
                col[j]++;
            }
        }
        
    }
    for(int i=0;i<n;i++)
        if(row[i]==1)
        {
            cout<<i+1<<" ";
            break;
        }
    for(int i=0;i<m;i++)
        if(col[i]==1)
        {
            cout<<i+1;
            break;
        }
    cout<<endl;
}
int main()
{
    fastread;
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}