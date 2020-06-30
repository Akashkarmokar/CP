//
// Created by akash_karmokar on 1/10/19.
//
#include <bits/stdc++.h>
using namespace std;
int is_Prime(int value){
    int i =2;
    for(i=2;i<value;i++){
        if(value%i==0){
            return 0;
        }
    }
    return  1;
}
int main()
{
    int a,b,i;
    cin>>a>>b;
    a++;
    for(;a<=b;a++){
        if(is_Prime(a)==1){
            if(a==b){
                cout<<"YES"<<endl;
                return 0;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    cout<<"NO"<<endl;
    return 0;
}
