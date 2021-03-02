#include<bits/stdc++.h>
using namespace std;


int g1(int num)
{
    vector<int>v;
    while (num)
    {
        v.push_back(num%10);
        num = num/10;
    }
    sort(v.begin(),v.end());
    int sum = 0;
    int a = 1;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i]*a;
        a*=10;
    }
    
    return sum;
}

int g2(int num)
{
    vector<int>v;
    while (num)
    {
        v.push_back(num%10);
        num = num/10;
    }
    sort(v.rbegin(),v.rend());
    int sum = 0;
    int a = 1;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i]*a;
        a*=10;
    }
    
    return sum;
}


int main()
{
    int n,k;
    cin>>n>>k;
    
    if(k==0)
    {
        cout<<n<<endl;
        return 0;
    }

    int ans=n;
    for(int i=1;i<=k;i++)
    {   
        ans = g1(ans)-g2(ans);
    }
    cout<<ans<<endl;
    return 0;
}