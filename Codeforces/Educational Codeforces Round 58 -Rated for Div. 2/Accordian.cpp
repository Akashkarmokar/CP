//
//     That code is inspired by the tutorial of codeforces.com.
//     Here is the link of tutorial and code also :
//                                                 1. https://codeforces.com/blog/entry/64483
//
//  It is a simple greedy implementation problem .No need to use data structure or any other algorithm .
//
//          Happy coding.
//     Before see the solution : please read about 1.string find function
//                                                 2. string erase function
//                                                 3. string :: npose
//
//
#include <bits/stdc++.h>
#include <string>
using namespace std;
void remove(string &s,  string c){
    auto position = s.find(c);
    if(position == string :: npos){
        cout<<"-1"<<endl;
        exit (0);
    }
    s.erase(0,position+1); //delete positon+1 value from the 0 index ;
}
int main()
{
    string s;
    cin>>s;
    remove(s,"[");
    remove(s,":");
    reverse(s.begin(),s.end());
    remove(s,"]");
    remove(s,":");
    cout<<count(s.begin(),s.end(),'|')+4<<endl;

    return 0;
}
//
//  string :: npos  is basically a way to determine whether or not a call to find () was succesful.
//  If ther position received from find() equals string::npos .then the search was unsuccessful.
//
