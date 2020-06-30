#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif 
    int n;
    cin>>n;
    string s;
    cin>>s;
    int min = 0 ;
    int flag = 0 ;
    for(int i = 0 ;i<n;i++)
    {
        if(s[i]=='x')
        {
            flag++;
        }
        else
        {
            flag = 0 ;
        }
        if(i<n-1)
        {
            if(s[i+1]=='x')
            {
                continue;
            }
        }
        if(flag>=3)
        {
            min= min + (flag - 2);
        }
    }
    cout<<min<<endl;
    return 0;
}