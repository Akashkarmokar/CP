#include<iostream>
using namespace std;
int main()
{
    int n,x,b,a,neg=0;
    cin >> n ;
    if(n>2){
        for(int i=2 ; i<n ; i++){
            if(i%2==0){
                a=i;
                b=n-a;
                if(b%2==0){
                    if(n=a+b){
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                else{
                    neg++;
                }
            }
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    if(neg>0){
        cout<<"NO"<<endl;
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
