//
// Created by akash_karmokar on 1/6/19.
// Metropolitan University,Sylhet,BANGLADESH.
//
// PROBLEM SOLVED USING -----------------" STACK "--------------------- only .
//


#include <bits/stdc++.h>
#include <stack>
using namespace std;
//stack <string> back;
//stack <string>forward;

int main()
{
    int test_case;
    string input,url;
    stack <string> back;
    stack <string>forward;
    cin>>test_case;
    for(int i=1;i<=test_case;i++){

          int j=0;

          //That's while loop for cleaning the stack of back and forward in every test case
          while(!back.empty()){
              back.pop();
          }
          while(!forward.empty()){
              forward.pop();
          }
          //
          
        while(cin>>input){
            //int j=0;
            if(j==0){
                cout<<"Case "<<i<<":"<<endl;
                j++;
            }
            if(input=="VISIT"){
                cin>>url;
                back.push(url);
                cout<<back.top()<<endl;
                while(!forward.empty()){
                    forward.pop();
                }
            }
            else if(input=="BACK"){
                if(back.empty()){
                    cout<<"Ignored"<<endl;
                }
                else{
                    forward.push(back.top());
                    back.pop();
                    if(back.empty()){
                        cout<<"http://www.lightoj.com/"<<endl;
                    }
                    else{
                        cout<<back.top()<<endl;
                    }

                }
            }
            else if(input=="FORWARD"){
                if(forward.empty()){
                    cout<<"Ignored"<<endl;
                }
                else{
                    cout<<forward.top()<<endl;
                    back.push(forward.top());
                    forward.pop();
//                    if(forward.empty()){
//                        cout<<"Ignored"<<endl;
//
//                    }
//                    else{
//                        cout<<back.top()<<endl;
//                    }
                }
            }
            else if(input=="QUIT"){
                break;
            }
        }
    }
    return 0;
}
