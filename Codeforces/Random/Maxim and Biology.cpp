#include<bits/stdc++.h>
using namespace std;
#define Max 1e6 ;
int cnt(char ch,char ch1){
    if(ch>ch1){
        return min(ch-ch1,'Z'-ch+1+ch1-'A');
    }
    else{
        return min(ch1-ch,ch-'A'+1+'Z'-ch1);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("ou.txt","w",stdout);
    #endif

    int n;
    int mn = Max;
    string str;
    cin>>n>>str;

    for(int i = 0;i<=n-4;i++)
    {
        int t=cnt(str[i],'A');
        t+= cnt(str[i+1],'C');
        t+=cnt(str[i+2],'T');
        t+=cnt(str[i+3],'G');
        mn=min(mn,t);
    }
    cout<<mn<<endl;
    return 0;
}
