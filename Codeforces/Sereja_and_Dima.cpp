#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0,j=n-1,x=1;
    long long a = 0,b=0;
    while(i<=j){
        if(v[i]<v[j]){
            if(x%2==0){
                a+=v[j];
                j--;
                x++;
            }else{
                b+=v[j];
                j--;
                x++;
            }
        }else{
            if(x%2==0){
                a+=v[i];
                i++;
                x++;
            }else{
                b+=v[i];
                i++;
                x++;
            }
        }
    }
    cout<<b<<" "<<a<<endl;
    return 0;
}