//
// Created by akash_karmokar on 1/11/19.
// ..................
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    int i,j;
    for(i=0;i<test_case;i++){
        int a,b,x;
        cin>>a>>b>>x;
        if(x<a){
            cout<<x<<endl;
        }
        else{
            for(j=b+1;j<=1000000000;j++){
                if(j%x==0){
                    cout<<j<<endl;
                    break;
                }
            }
        }
    }
    return  0;
}
