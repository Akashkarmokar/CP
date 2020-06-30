#include<iostream>
#include<cstdio>
#include<math.h>
char arr[150][150];
using namespace std;

int main(){
    int n,m,k,counter=0;
    scanf("%d %d",&n,&m);
    int centre_value_of_row =(n/2)+1;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='B'){
                counter++;
            }
        }
    }
    int counter2=0;
    k = counter/2 + 1;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
                if(arr[i][j]=='B'){
                    counter2++;
                }
                if(k==counter2){
                    printf("%d %d\n",i+1,j+1);
                    return 0;
                }
            }
        }
}
