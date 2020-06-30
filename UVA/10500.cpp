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
    int a,b,c,d,ans;
    while(1)
    {
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0)
            break;
        ans = 1080;
        ans+=(a-b)>0 ? (a-b)*9 : (a-b+40)*9;
        ans+=(c-b)>0 ? (c-b)*9 : (c-b+40)*9;
        ans+=(c-d)>0 ? (c-d)*9 : (c-d+40)*9;
        cout<<ans<<endl;
     }
    return 0;
}
