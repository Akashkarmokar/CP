#include<bits/stdc++.h>
using namespace std;

int LCSubStr(string X,string Y, int m, int n)
{
    int LCSuff[m + 1][n + 1];
    int result = 0; 
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

void solve(){
    string a,b;
    cin>>a>>b;
    int m = LCSubStr(a,b,(int)a.size(),(int)b.size());
    cout<<(a.size()-m)+(b.size()-m)<<endl;
}

int main()
{
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
