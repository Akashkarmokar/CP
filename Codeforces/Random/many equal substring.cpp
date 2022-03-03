#include<bits/stdc++.h>
using namespace std;
string s;
int n,t;
int main()
{
	cin>>n>>t;
	cin>>s;
	int k=0;
	for(int i=0;i<n-1;i++)
		if(s.substr(0,i+1)==s.substr(n-i-1)) k=i+1;
	cout<<s;
	for(int i=1;i<t;i++) cout<<s.substr(k);
	return 0;
}
/*
*   Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
*   Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
* fb:https://www.facebook.com/akashcsemu
*
*/
