#include<iostream>
using namespace std;
int main()
{
    int counter=1;
    char c;
    string s;
    cin >>s;
    for(int i =0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            counter++;
            //cout<<counter<< " "<<i<<endl;

            if(counter>6){
                cout<<"YES"<<endl;
                return 0;
            }

        }
        else{
            counter=1;
        }
        //cout<<counter<< " "<<i<<endl;
    }
    if(counter<6){
        cout<<"NO"<<endl;
    }
    return 0;
}
/*
* Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
*   Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
*
*
*/
