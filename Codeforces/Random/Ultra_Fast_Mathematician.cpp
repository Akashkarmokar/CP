#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int length = str1.length();
    for(int i=0;i<length;i++)
    {
        if(str1[i]==str2[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
    return 0;
}