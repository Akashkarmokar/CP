#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans = 0;
    for(int i=1;;i++)
    {
        if(stoll(to_string(i)+to_string(i))>n){
            cout<<i-1<<endl;
            return 0;
        }
    }
    return 0;
}