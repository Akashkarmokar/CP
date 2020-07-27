#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        unsigned long long sum = 0;
        for(int i=n;i>=3;i=i-2)
        {
            unsigned long long  x = (i*2)+((i-2)*2);
            unsigned long long t=(i-1)/2;
            sum+=(x*t);  
        }
        cout<<sum<<endl;
    }
    return 0;
}