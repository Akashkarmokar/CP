#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    scanf("%d",&testcase);
    getchar();
    getchar();
    while(testcase--)
    {
        string str;
        map<string,int>mp;
        int total = 0;
        while(getline(cin,str))
        {
            if(str.length()==0)
            {
                break;
            }
            mp[str]++;
            total++;
        }
        map<string,int>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            double v = it->second*100.0/total;
            printf("%s %.4lf\n",(*it).first.data(),v);
        }
        if(testcase)
            puts("");
    }
    
    return 0;
}
