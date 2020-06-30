//
// Created by akash_karmokar on 1/23/19.
//
// Methodology:
//  1.First of all input every testcase one by one .
//  2.when we insert any test case in our trie always check that  if any part of our test case similar to your previous case
//    then  falg value will be 1.
//    Here i don't work for falg 0.only change the flag value if i find any prefix and call flag and assign 1 in flag .
//
//
#include <iostream>
#include <string.h>
using namespace std;
int flag = 0;
struct node{
    bool endmark;
    node* next[10];
    node(){
        endmark = false;
        for(int i =0;i<10;i++){
            next[i]=NULL;
        }
    }
}*root;
void insert(char* str,int length){
    node* curr = root;
    for(int i =0;i<length;i++){
        int id = str[i]-'0';
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
            curr = curr->next[id];
        }
        else{
            curr=curr->next[id];
            if(i==length-1){
                flag = 1;
            }
            if(curr->endmark== true){  // If here we   a number by finding endmark then it will not the consistent.
                flag = 1;
                break;
            }
            continue;

        }
    }
    curr->endmark= true;
}

void del(node* curr){
    for(int i =0;i<9;i++){
        if(curr->next[i]){
            del(curr->next[i]);
        }
    }
    delete(curr);
}
int main(){
    int test_case;
    cin>>test_case;
    for(int i =0;i<test_case;i++){
        root = new node();
        flag = 0;
        int sub_test_case;
        cin>>sub_test_case;
        for(int j=0;j<sub_test_case;j++){
            char str[20];
            scanf("%s",str);
            insert(str,strlen(str));
            //printf("%d\n",flag);
        }

        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        del(root);

    }
    return 0;
}
