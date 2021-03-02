#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x%100)
        cout<<100-(x%100)<<endl;
    else
        cout<<"100"<<endl;
    return 0;
}