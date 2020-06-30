//
// Created by akash_karmokar on 1/4/19.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char in[2];
    char que[2];
    int no=0;
    scanf("%s",in);
    for(int i=0;i<5;i++){
        scanf("%s",que);
        if(in[0]==que[0] || in[1]==que[1] || in[1]==que[0] || in[0]==que[1]){
                no=1;
        }
    }
    if(no==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}


