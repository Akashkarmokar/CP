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

//________________________________________________________________________________________________________________________________________
double n,m;
double area(double x)
{
    return (n-2*x)*(m-2*x)*x;
}

int main(){
	fastread;

    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>n>>m;
        double l=0.0,r=min(n,m)/2.0,mid1,mid2,ans = 0;
        while(l<r)
        {
            mid1=l+(r-l)/3.0;
            mid2=l+(r-l)/3.0*2.0;

            double res1=area(mid1);
            double res2=area(mid2);

            ans = max(ans,max(res1,res2));

            if(res1>=res2)
                r=mid2-0.000001;
            else
                l=mid1+0.000001;
        }
        printf("Case %d: %.10lf\n",i,ans);
    }
	return 0;
}
