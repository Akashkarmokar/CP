#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,w;
    cin>>a>>b>>w;
    w*=1000;
    int mnans = (w+b-1)/b;
    int mxans = w/a;
    if(mxans<mnans)
        cout<<"UNSATISFIABLE "<<endl;
    else
        cout<<mnans<<" "<<mxans<<endl;
    return 0;
}