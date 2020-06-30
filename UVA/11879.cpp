/*
	Problem solved by Akash Karmokar Aditto
	Metropolitan University,Bangladesh.
	Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long 
using namespace std;

int scan_int(){
	int x;
	scanf("%d",&x);
	return x;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string str;
	while(cin>>str){
		if(str[0] == '0' && str[1]== '\0'){
			return 0;
		}
		ll length = str.length();
		int num = 0;
		for(int i=0;str[i]!='\0';i++){
			num  =  (num * 10) + (str[i]-48);
			num = num % 17 ; 
		}
		if(num == 0) {
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
