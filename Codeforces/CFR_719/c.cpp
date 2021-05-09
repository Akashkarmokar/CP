#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<1<<endl;
    }else if(n==2){
        cout<<"-1"<<endl;
    }else{
        int arr[n][n];
        int k = 1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j+=2){
                    arr[i][j]=k;k++;
                }
            }else{
                for(int j=1;j<n;j+=2){
                    arr[i][j] = k;
                    k++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==1){
                for(int j=0;j<n;j+=2){
                    arr[i][j]=k;k++;
                }
            }else{
                for(int j=1;j<n;j+=2){
                    arr[i][j] = k;
                    k++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}