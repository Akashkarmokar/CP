#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    s='#'+s;
    bool ok = true;
    for(int i=1;i<s.length() && ok;i++)
    {
        if((i%2==1) && (s[i]>64 && s[i]<91))
        {
            ok = false;
        }
        else if( (i%2==0) && (s[i]>96 && s[i]<123))
        {
            ok = false;
        }
    }
    if(ok)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}