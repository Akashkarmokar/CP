#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    x--;
    y--;
    vector<string>v(h);
    for(int i=0;i<h;i++){
        cin>>v[i];
    }
    int cnt = -3;
    for(int i=x;i<h && v[i][y]!='#';i++) cnt++;
    for(int i=x;i>=0 && v[i][y]!='#';i--) cnt++;
    for(int i=y;i<w && v[x][i]!='#';i++) cnt++;
    for(int i=y;i>=0 && v[x][i]!='#';i--) cnt++;
    cout<<cnt<<endl;
    return 0;
}