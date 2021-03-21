#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ok = 1;
        for(int i=0;i<k;i++){
            ok = ok && s[i]==s[n-i-1];
        }
        cout<<(ok && k*2<n ? "Yes":"No")<<endl;
    }
    return 0;
}