#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>res(n+5,0);
        vector<int>ans;
        for(int i=0;i<2*n;i++)
        {
            int x;cin>>x;
            if(res[x]==0)
            {
                ans.push_back(x);
                res[x]=1;
            }
        }
        for(auto a:ans)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }   
    return 0;
}