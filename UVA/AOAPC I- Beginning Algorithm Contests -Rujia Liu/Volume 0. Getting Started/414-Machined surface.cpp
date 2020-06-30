#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int row;
    while(1)
    {
        cin>>row;
        if(row==0)return 0;
        cin.ignore();
        vector<int>space(row+1,0);
        int min_space=25;
        int row_space;
        string ch;
        for(int i = 1 ;i<=row ;i++)
        {
            row_space =  0 ;
            getline(cin,ch);
            for(int j = 0 ;j<25 ;j++)
            {
                if(ch[j]==' ') row_space++;
            }
            space[i]= row_space;
            if(row_space<min_space) min_space=row_space;
        }
        int res = 0 ;
        for(int i = 1 ; i<=row ;i++)
        {
            res = res + space[i]-min_space;
        }
        cout<<res<<endl;
        space.clear();
    }
    return 0;
}