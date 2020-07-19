#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int index = n-2;
        while(index>=0 && v[index]>=v[index+1])
            index--;
        while(index>=0 && v[index]<=v[index+1])
            index--;
        cout<<index+1<<endl;
    }
    return 0;
}