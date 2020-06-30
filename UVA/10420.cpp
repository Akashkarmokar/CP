#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    map<string,int>ans;
    int testcase;
    cin>>testcase;
    cin.ignore();
    while(testcase--)
    {
        string line;
        cin>>line;
        
        string tmp;
        getline(cin,tmp);// to initialize 'enter' for a line 
        ans[line]++;
    }
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}