#include<bits/stdc++.h>
using namespace std;
int arra[1001];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int n;
    cin>>n;
    int no[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>no[i];
        arra[no[i]]++;
    }
    vector<int>vec;
    for(int i = 0;i<n;i++)
    {
        if(arra[no[i]]==1)
        {
            vec.push_back(no[i]);
        }
        arra[no[i]]--;
    }
    cout<<vec.size()<<endl;
    for(int i = 0 ;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
    return  0;

}