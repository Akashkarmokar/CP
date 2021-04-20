#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    y1 = - y1;
    if(x1==x2){
        cout<<x1<<endl;
        return 0;
    }
    double m = 1.0*(y2-y1)/(x2-x1);
    double x = (m*x1-y1)/m;
    cout<<setprecision(9);
    cout<<x<<endl;
    return 0;
}