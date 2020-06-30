#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,d,cnt=0;
    cin>>n>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;)
    {
        bool ok = false;
        int dis = min(n-1,i+d);
        for(int j=dis;j>i;j--)
            if(s[j]=='1')
            {
                ok = true;
                cnt++;
                i=j;
                break;
            }
        if(ok==false)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
