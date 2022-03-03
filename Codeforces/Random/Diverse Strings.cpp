#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    int n, length;
    cin >> n;
    while (n--)
    {
        int x = 0;
        cin >> str;
        length = str.length();
        if (length == 1)
        {
            printf("Yes\n");
        }
        else
        {
            sort(str.begin(), str.end());
            for (int i = 1; i < length; i++)
            {   char c=str[i-1];
                if(str[i] == c + 1){
                    continue;
                }
                else
                {
                    
                    x =1;
                    break;
                }
            }
            if(x==1){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
}
