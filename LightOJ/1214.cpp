#include<iostream>
using namespace std;

int big_int_divisor(string a,int b)
{
    int pos=0;
    long long rem = 0;
    if(a[0]=='-')
        pos++;
    while(a[pos])
    {
        int digit = a[pos]-48;
        rem=((rem+digit)%b)*10;
        pos++;
    }
    if(rem==0)
        return 1;
    else
        return 0;
}

int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        string s;cin>>s;
        int b;cin>>b;
        cout<<"Case "<<i<<": ";
        if(big_int_divisor(s,b))
            cout<<"divisible"<<endl;
        else
            cout<<"not divisible"<<endl;
    }
    return 0;
}
