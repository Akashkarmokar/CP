#include<bits/stdc++.h>
using namespace std;
const double pi (2*acos(0.0));
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int testcase;
    cin>>testcase;
    int t= 1 ;
    while(testcase--)
    {
        double radius;
        cin>>radius;
        double sqare_area = (2*radius)*(2*radius);
        double circle_area = pi * (radius*radius);
        cout<<"Case "<<t++<<": ";
        printf("%.2f\n",sqare_area-circle_area);
    }
    return 0;
}