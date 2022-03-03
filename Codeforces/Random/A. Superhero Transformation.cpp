//
// Created by akash_karmokar on 2/3/19.
//
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    string s,t;
    int flag = 0;
    cin>>s;
    cin>>t;
    if(s.length()==t.length()){
        for(int i =0;i<s.length();i++){
            if((s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') && (t[i]=='a' ||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')){
                continue;
            }else if( (s[i]!='a' && s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u') && (t[i]!='a' &&t[i]!='e'&&t[i]!='i'&&t[i]!='o'&&t[i]!='u') ){
                continue;
            }
            else{
                flag++;
                break;
            }
        }
        if(flag==0){
            printf("Yes\n");
            return 0;
        }
        else{
            printf("No\n");
            return 0;
        }
    }
    else{
        printf("No\n");
    }
    return 0;
}
