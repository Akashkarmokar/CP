#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    a+=b;
    if(a>=15 && b>=8)
    {
        cout<<"1\n";
        return 0;
    }
    else if(a>=10 && b>=3)
    {
        cout<<"2\n";
        return 0;
    }
    else if(a>=3)
    {
        cout<<"3\n";
        return 0;
    }
    else
    {
        cout<<"4\n";
        return 0;
    }
    return 0;
}