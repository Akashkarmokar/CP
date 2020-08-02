#include<bits/stdc++.h>
using namespace std;

const string T = "abacaba";

int count(const string &p)
{
    int cnt = 0;
    for(int i=0;i<(int)p.size();i++)
    {
        if(p.substr(i,T.size())==T)
            cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        string s;cin>>s;
        bool flag = false;

        for(int i=0;i+T.size()<=n;i++)
        {
            string ss = s;
            bool ok = true;
            for(int j = 0;j<T.size();j++)
            {
                if(s[i+j]!='?' && ss[i+j]!=T[j])
                {
                    ok = false;
                    break;
                }
                ss[i+j]=T[j];
            }
            if(ok && count(ss)==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(ss[j]=='?')
                        ss[j]='d';
                }
                flag = true;
                cout<<"YES"<<endl;
                cout<<ss<<endl;
                break;
            }
        }
        if(!flag)
            cout<<"NO"<<endl;
    }
    return 0;
}