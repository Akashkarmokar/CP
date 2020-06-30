#include<bits/stdc++.h>
using namespace std;
 
//________________________________________________________________________________________________________
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define inputfile freopen("C:\\Users\\Akash\\Desktop\\input.txt","r",stdin)
#define outputfile freopen("C:\\Users\\Akash\\Desktop\\output.txt","w",stdout);
#define ll long long 
//________________________________________________________________________________________________________
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}} //
const int Max = 1e6+5; 
 
//--------------------------------------------------------------------------------------------------------
int main()
{
    //inputfile;
    //outputfile;
    //fastread;
    int n;
    while(scanf("%d",&n)==1)
    {
        int arr[n];
        int mark[Max]={0};
        bool ok = true ;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=1;i<n;i++) mark[abs(arr[i]-arr[i-1])]=1;
        for(int i=1;i<n && ok==true;i++)
            if(mark[i]==0)
                ok = false;
        
        if(ok)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
    return 0;
}
