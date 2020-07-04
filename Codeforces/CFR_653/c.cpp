#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        string s;cin>>s;
        stack<char>ss;
        for(int i=0;i<s.size();i++)
        {
            if(ss.size())
            {
                if(ss.top()=='(' && s[i]==')')
                {
                    ss.pop();
                }
                else
                {
                    ss.push(s[i]);
                }
            }
            else
            {
                ss.push(s[i]);
            }
        }
        cout<<ss.size()/2<<endl;
    }
    return 0;
}