#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        vector<int>v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[1]!=v[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<v[0]<<" "<<v[0]<<" "<<v[1]<<endl;
        }
        
    }
    
    return 0;
}