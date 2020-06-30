#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,test_case,summation=0;
    scanf("%d",&test_case);
    for(int i = 0;i<test_case;i++){
        scanf("%d %d %d",&a,&b,&c);
        if( (a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1) ){
            summation++;
        }
    }
    cout<<summation<<endl;

    return 0;
}
/*
* Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
* Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
*
*
*/
