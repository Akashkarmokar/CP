#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ac_minus = (c&1) && a<0;
    int bc_minus = (c&1) && b<0;

    if(ac_minus != bc_minus){
        if(ac_minus){
            cout<<"<"<<endl;
        }else{
            cout<<">"<<endl;
        }
    }else{
        if(abs(a) == abs(b)){
            cout<<"="<<endl;
        }else if(abs(a) < abs(b) ^ ac_minus){
            cout<<"<"<<endl;
        }else{
            cout<<">"<<endl;
        }
    }
    return 0;
}