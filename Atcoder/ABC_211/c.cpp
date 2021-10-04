#include <bits/stdc++.h>
#include <string>
using namespace std;
const int Max = 1e5+5;

int occur(string a, string b)
{
    int m = a.length();
    int n = b.length();
 
    // Create a table to store results of sub-problems
    int lookup[Max][Max] = { { 0 } };
 
    // If first string is empty
    for (int i = 0; i <= n; ++i)
        lookup[0][i] = 0;
 
    // If second string is empty
    for (int i = 0; i <= m; ++i)
        lookup[i][0] = 1;
 
    // Fill lookup[][] in bottom up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // If last characters are same, we have two
            // options -
            // 1. consider last characters of both strings
            //    in solution
            // 2. ignore last character of first string
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] +
                               lookup[i - 1][j];
                 
            else
                // If last character are different, ignore
                // last character of first string
                lookup[i][j] = lookup[i - 1][j];
        }
    }
 
    return lookup[m][n];
}


void run_case(){
	string s; cin>>s;
	string mat = "chokudai";
	cout<<(int)occur(s,mat)<<endl;
}


int main(){
	int tc=1;
	// cin>>tc;

	while(tc--){
		run_case();
	}
}