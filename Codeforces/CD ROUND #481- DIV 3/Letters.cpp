#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int n,m;
    cin>>n>>m;
    long long int dormitory[n+1]={0};
    long long int letter[m+1];
    for(int i = 1 ;i<=n;i++)
    {
        cin>>dormitory[i];
        dormitory[i] = dormitory[i-1] + dormitory[i];
    }
    int room = 1;
    for(int i=1;i<=m;i++)
    {
        cin>>letter[i];
        long long int value = letter[i];
        
        for(int j =room;j<=n;j++)
        {
            if(value>dormitory[j-1] && value<=dormitory[j])
            {
                cout<<j<<" "<<value-dormitory[j-1]<<endl;
                room = j;
                break;
            }
        }
    }
    return 0;
}