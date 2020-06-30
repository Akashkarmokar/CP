#include<bits/stdc++.h>
using namespace std;
 
//________________________________________________________________________________________________________
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define in freopen("input.txt","r",stdin)
#define out freopen("output.txt","w",stdout);
#define ll long long 
//________________________________________________________________________________________________________
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}} //


//--------------------------------------------------------------------------------------------------------
int main()
{
// #ifndef ONLINE_JUDGE
//     in;
//    //out;
// #endif
    //fastread;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int row,col;
        cin>>row>>col;
        int tmp = row/3;
        int tmpp = col/3;
        cout<<tmp*tmpp<<endl;
    }
    return 0;
}
