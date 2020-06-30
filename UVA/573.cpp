#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif // ONLINE_JUDGE
    double h,u,d,f;
    while(1)
    {
        cin>>h>>u>>d>>f;
        if(h==0.0)
            break;
        f = u*(f/100);
        int day = 0 ;
        double hight = 0.0 ;
        while(1)
        {
            day++;
            if(u>0)
            {
                hight = hight + u;
            }
            u = u - f;
            if(hight > h)
                break;
            hight = hight - d ;
            if(hight < 0 )
                break;
        }
        if(hight >= 0 )
            cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;
    }

    return 0 ;
}
