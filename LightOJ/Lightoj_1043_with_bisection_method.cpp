#include<bits/stdc++.h>

using namespace std;

double triangleRatio(double ab,double ac,double bc,double ad)
{
    
    double ae = (ad*ac)/ab;
    double de = (ad*bc)/ab;
    
    // Perimeter
    double s1 = (ab+ac+bc)/2.0 ; 
    double s2 = (ad+de+ae)/2.0 ;
    //Area of two triangle 
    double largeTriangleArea = sqrt(s1*(s1-ab)*(s1-ac)*(s1-bc));
    double smallTrianlgeArea = sqrt(s2*(s2-ad)*(s2-ae)*(s2-de));

    double trapheziumArea = largeTriangleArea - smallTrianlgeArea;
    double ratio = smallTrianlgeArea/trapheziumArea;

    return ratio; 
}

double bisection(double ab,double ac,double bc,double ratio)
{
    double low,high,mid,ad;
    low = 0.0 ;
    high = ab;
    for(int i = 0 ;i<100;i++)
    {
        mid = (low + high)/2.0;
        if(triangleRatio(ab,ac,bc,mid)>ratio)
            high = mid ;
        else
            low = mid;
    }
    return mid;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int tc;
    cin>>tc;
    double ab,ac,bc,r;
    for(int i = 1 ;i<=tc;i++)
    {
        cin>>ab>>ac>>bc>>r;
        double ans = bisection(ab,ac,bc,r);
        cout<<"Case "<<i<<": "<<setprecision(10)<<ans<<endl;
    }    
    return 0 ;
}