#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while (tc--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1)
        {
            cout<<"0"<<endl;
        }    
        else if(n==2)
        {
            cout<<m<<endl;
        }
        else if(n>2)
        {
            cout<<m*2<<endl;
        }
        
    }
    
    return 0;
}