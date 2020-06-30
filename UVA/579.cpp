#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    double hh,mm;
    while(scanf("%lf:%lf",&hh,&mm)==2)
    {
        if(hh==0 && mm==0)
            break;
        double angle = abs(30*hh-5.5*mm);
        if(angle>180)
            printf("%.3lf\n",360-angle);    
        else
            printf("%.3lf\n",angle);
    }
    return 0;
}