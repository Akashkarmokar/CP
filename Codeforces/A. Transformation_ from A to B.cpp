#include<bits/stdc++.h>
using namespace std;
int a,b;
vector<int>v;

bool dfs(long long int a)
{
    v.push_back(a);
    if(a==b)
        return 0;
    long long int tmp = a*2;
    long long int tmp1 = a*10+1;
    if(tmp<=b)   
        if(dfs(tmp)==0)
            return 0;
    if(tmp1<=b)
        if(dfs(tmp1)==0)
            return 0;
    v.pop_back();
    return 1;
}
int main()
{
    cin>>a>>b;
    dfs(a);
    if(v.size()==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
