#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int t = 1 ;
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll num ;
        cin>>num;
        ll root = ceil(sqrt(num));
        ll extrenum = root*root - num ;
        ll row = 0 , col = 0 ;
        if(extrenum<root)
        {
            row =extrenum +1 ;
            col =root;
        }
        else
        {
            row = root ;
            col = num - (root - 1)*(root - 1);
        }
        if(root %2 == 0 )
        {
            swap(row,col);
        }
        cout<<"Case "<<t++<<": ";
        cout<<row<<" "<<col<<endl;
    }
    return 0;
}