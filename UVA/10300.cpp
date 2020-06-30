#include<iostream>
using namespace std;
int main ()
{
    int case_no;
    cin>>case_no;
    for (;case_no>0;case_no--){
        int n,a,b,c,counter=0;
        cin>>n;
        for(int i = 0; i<n ; i++){
            cin >> a >>b >> c ;
            counter = counter + (a*c);
        }
        cout << counter << endl ;
    }
     return 0 ;
}
