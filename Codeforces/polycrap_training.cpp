/*
    Problem solved by: Akash Karmokar Aditto
    Email: akashcsemu@gmail.com
    Metropolitan University,Bangladesh.
    Department of Computer Science and Engineering
*/

#include<bits/stdc++.h>
using namespace std;

//Predefined macros
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vowel(a)  (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
#define vowelC(a) (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
#define odd(number)  ((number & 1)==1)
#define even(number) ((number & 1)==0)
#define i64 long long 


//________________________________________________________________________________________________
//
//                                 Happy Codding :) 
//________________________________________________________________________________________________

//main function
int main()
{
    fastread;

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    
    
  int n ;
  cin>>n;
  vector<int>v;
  int x;
  for(int i = 1 ;i<= n ;i++)
  {
      cin>>x;
      v.push_back(x);
  }
  sort(v.begin(),v.end());
  int day = 0 , pblm = 1 ;
  for(int i = 0 ;i< n ;i++)
  {
      if(v[i]>= pblm)
      {
          pblm++;
          day++;
      }
      
  }
  cout<<day<<endl;
  return 0 ;
}