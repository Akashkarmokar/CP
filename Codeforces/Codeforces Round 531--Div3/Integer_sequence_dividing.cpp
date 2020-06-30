//
// Created by akash_karmokar on 1/11/19.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int no;
    cin>>no;
    no = no*(no+1)/2;
    if(no%2==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    return 0;
}
