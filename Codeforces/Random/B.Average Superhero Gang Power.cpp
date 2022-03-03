//
// Created by akash_karmokar on 2/4/19.
//
#include <bits/stdc++.h>
using namespace std;
const long long  N = 100010;
int main () {

    long long n,k,m,i,increase,sum=0;
    long double avg;
    long long   array[N];
    cin >>n>>k>>m;
    for( i = 0;i<n;i++){
        cin>>array[i];
        sum += array[i];
    }

    sort(array,array+n);

    avg = (long double)(sum + min(m,n*k))/(long double)(n);

    for( i =0;i<min(n-1,m);i++){
        sum -=  array[i];
        increase =  sum + min(m-(i+1),k*(n-(i+1)));
        avg = max (avg, (long double )(increase)/(long double)(n-(i+1)));
    }
    cout<<fixed<<setprecision(20)<<avg<<endl;
    return 0 ;

}
