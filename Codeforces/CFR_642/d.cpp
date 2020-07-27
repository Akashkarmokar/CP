#include<bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator() (const pair<int,int>&x,const pair<int,int>&y) const
    {
        int l_a = x.second-x.first+1;
        int l_b = y.second-y.first+1;
        if(l_a == l_b)
            return x.first<y.first;
        return l_a>l_b;
    }
};

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        set<pair<int,int>,cmp>s;
        s.insert({0,n-1});
        vector<int>ans(n);
        for(int i=1;i<=n;i++)
        {
            pair<int,int>now = *s.begin();
            s.erase(s.begin());
            int index = (now.first+now.second)/2;
            ans[index] = i;
            if(now.first<index)
                s.insert({now.first,index-1});
            if(index<now.second)
                s.insert({index+1,now.second});
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}