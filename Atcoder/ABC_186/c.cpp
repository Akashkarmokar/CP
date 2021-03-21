#include<bits/stdc++.h>
using namespace std;

bool to_oct(int num){
    bool sev = false;
    while(num){
        int rem = num%8;
        if(rem==7){
            sev = true;
            break;
        }
        num = num/8;
    }
    return sev;
}

bool check(int num){
    bool sev = false;
    while(num && sev==false){
        int a = num%10;
        num = num/10;
        if(a==7){
            sev = true;
        }
    }
    return sev;
}




int main()
{
    int n;
    cin>>n;
    long long sum = 0;
    for(int i=1;i<=n;i++){
        if(check(i) || to_oct(i)){
            sum++;
        }
    }
    cout<<n-sum<<endl;
    return 0;
}