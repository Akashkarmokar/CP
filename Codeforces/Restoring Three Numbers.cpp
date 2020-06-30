#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    int m= 0;
    for(int i =0;i<4;i++)
    {
        cin>>arr[i];
        if(arr[i]>m){
            m = arr[i];
        }
    }
    sort(arr,arr+4);
    for(int i =0;i<3;i++){
        cout<<m-arr[i];
        if(i==2){
            break;
        }
        cout<<" ";
    }
    return 0;
}
