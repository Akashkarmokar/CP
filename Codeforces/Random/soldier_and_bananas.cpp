#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    long long total = k*(((1+w)*w)/2);
    cout<<max(0LL,total-n)<<endl;
    return 0;
}