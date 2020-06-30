#include<bits/stdc++.h>
using namespace std;
 
//________________________________________________________________________________________________________
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define inputfile freopen("C:\\Users\\Akash\\Desktop\\input.txt","r",stdin)
#define outputfile freopen("C:\\Users\\Akash\\Desktop\\output.txt","w",stdout);
#define ll long long 
//________________________________________________________________________________________________________
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}} //
 
 
//--------------------------------------------------------------------------------------------------------
int s,b;
int left_array[100010],right_arry[100010];

int main()
{
    // inputfile;
    //outputfile;
    //fastread;
    while(scanf("%d %d",&s,&b)==2)
    {
        if(s==0 && b==0)
            break;
        for(int i=1;i<=s;i++)
        {
            left_array[i]=i-1;
            right_arry[i]=i+1;
        }
        left_array[1]=-1;
        right_arry[s]=-1;
        int left,right;
        for(int i=1;i<=b;i++)
        {
            cin>>left>>right;
            left_array[right_arry[right]]=left_array[left];
            if(left_array[left]!=-1)
                cout<<left_array[left]<<" ";
            else
                cout<<"* ";
            right_arry[left_array[left]]=right_arry[right];
            if(right_arry[right]!=-1)
                cout<<right_arry[right]<<endl;
            else
                cout<<"*"<<endl;
        }
    cout<<"-"<<endl;
    }
    return 0;
}
