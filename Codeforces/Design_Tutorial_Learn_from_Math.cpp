#include<bits/stdc++.h>
using namespace std;

int mark[1000002];

void seive(int n)
{
    int i,j,limit = sqrt(n);
    mark[1] = 1;
    for(i=4;i<=n;i+=2)
        mark[i] = 1;
    for(i=3;i<=n;i+=2)
    {
        if(mark[i]==0){
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j] = 1;
                }
            }
        }
    }
}


int main()
{
    int n;cin>>n;
    seive(n);
    for(int i=3;i<=n/2;i++){
        int a = i;
        int b = n-i;
        if(mark[a] && mark[b])
        {
            cout<<a<<" "<<b<<endl;
            break;
        }
    }
    return 0;
}