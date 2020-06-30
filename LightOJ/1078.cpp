#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    for(int testcase=1;testcase<=tc;testcase++)
    {
        int a,b;
        cin>>a>>b;
        int cnt=1;
        long long  digit = b;
        while((digit%a)!=0)
        {
            digit=(digit*10+b)%a;
            cnt++;
        }
        cout<<"Case "<<testcase<<": "<<cnt<<endl;
    }
    return 0;
}
