#include<bits/stdc++.h>
using namespace std;
#define lightoj_print(i,s) (cout<<"Case "<<i<<": "<<s<<endl)
#define ll long long
 
 
int main()
{
    ll tc;cin>>tc;
    for(int testcase=1;testcase<=tc;testcase++)
    {
        int n;cin>>n;
        string s;cin>>s;
        n%=3;
        if(s=="Alice")
        {
            if(n==0 || n==2)
                lightoj_print(testcase,"Alice");
            else
                lightoj_print(testcase,"Bob");
        }
        else
        {
            if(n==1 || n==2)
                lightoj_print(testcase,"Bob");
            else
                lightoj_print(testcase,"Alice");
        }
    }
    return 0;
}
