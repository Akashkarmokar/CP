#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char s[110];
    int length,i=0,testcase;
    scanf("%d",&testcase);
    for(;gets(s);testcase--){
        length = strlen(s);
        if(length>10){
            printf("%c%d%c\n",s[0],length-2,s[length-1]);
        }
        else{
            puts(s);
        }
    }
    return 0;
}

Note: IT does not compile in C++14 .gets function removed from C++14 . Thats code for  C++11.
        and in some online judge also work it .
