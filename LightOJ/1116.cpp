#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        long long int num ;
        cin>>num;
        if(num%2!=0)
        {
            cout<<"Case "<<i<<": "<<"Impossible"<<endl;
        }
        else
        {
            long long int ekka = num/2;
            long long int dokka =2;
            while(ekka%2==0)
            {
                ekka/=2;
                dokka*=2;
            }
            cout<<"Case "<<i<<": "<<ekka<<" "<<dokka<<endl;
        }
    }
    return 0;
}
