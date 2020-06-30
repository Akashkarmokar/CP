#include<bits/stdc++.h>
using namespace std;
 
//________________________________________________________________________________________________________
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define inputfile freopen("C:\\Users\\Akash\\Desktop\\input.txt","r",stdin)
#define outputfile freopen("C:\\Users\\Akash\\Desktop\\output.txt","w",stdout);
#define ll long long 
//________________________________________________________________________________________________________
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}} //
 
 
//--------------------------------------------------------------------------------------------------------
int main()
{
    // inputfile;
    //outputfile;
    //fastread;
    int tc;cin>>tc;
    while(tc--)
    {
        int paying_char;cin>>paying_char;
        map<char,double>mp;
        double total_cost = 0.0;
        for(int i=1;i<=paying_char;i++)
        {
            char c;
            double tmp;
            cin>>c>>tmp;
            mp[c]=tmp;
        }
        int line_no;
        cin>>line_no;
        cin.ignore();
        string line;
        for(int i=0;i<line_no;i++)
        {
            line="";
            getline(cin,line);
            int sz = line.size();
            for(int j=0;j<sz;j++)
            {
                total_cost+=mp[line[j]];
            }
        }
        printf("%0.2lf$\n",total_cost/100);
        
    }
    return 0;
}
