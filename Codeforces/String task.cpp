#include<iostream>
#include<string>
using namespace std;
char text;
int main()
{
    while(cin>>text){
        text=tolower(text);
        if(text=='a'||text=='e'||text=='i'||text=='o'||text=='u'){
            //cout<<"."<<text;
        }
        else{
            cout<<"."<<text;
        }
    }
    return 0;
}
/*
*   Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
*   Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
* fb:https://www.facebook.com/akashcsemu
*
*/
