#include<iostream>
using namespace std;
int main(){

    int n,m,a,length,wideth;
    //long long result;
    scanf("%d %d %d",&n,&m,&a);
    if(n%a==0){
        length=n/a;
    }
    else if(n%a>0){
        length=(n/a)+1;
    }
    if(m%a==0){
        wideth = m/a;
    }
    else if(m%a>0){
        wideth=(m/a)+1;
    }
    //result=length*wideth;
    //printf("%d",length*wideth);
    cout <<(long long) length* wideth<<endl;
    return 0;
}
