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
    
    
  int n,x,y;
  cin>>n>>x>>y;
  string s;
  cin>>s;
  reverse(s.begin(),s.end());
  int counter = 0 ;
  for(int i = 0 ; i<y ;i++)
  {
      if(s[i]=='1')
      {
          counter++;
      }
  }
  if(s[y]=='0')
  {
      counter++;
  }
  for(int i = y+1 ; i<x ;i++)
  {
      if(s[i]=='1')
      {
          counter++;
      }
  }
  cout<<counter<<endl;
  return 0 ;
}