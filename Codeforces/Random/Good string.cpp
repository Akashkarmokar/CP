/*
	Problem solved by Akash Karmokar Aditto
	Metropolitan University,Bangladesh.
	Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include <stdio.h>
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

	int test_case;
	test_case=scan_int();
	for(int i =0;i<test_case;i++){
		int l = scan_int();
		string str;
		cin>>str;
		int x = str.length();
		if(x==1){
			cout<<"0"<<endl;
			continue;
		}
		else{
			if(str[0]=='>'){
				cout<<"0"<<endl;
				continue;
			}
			else{
				if(str[x-1]=='<'){
					cout<<"0"<<endl;
					continue;
				}
				else{
					int count = 0;
					for(int i =0;i< x/2 ;i++){
						if(str[i]=='<' && str[x-i-1]=='>')
							count++;
						else{
							break;
						}
					}
					cout<<count<<endl;
					continue;
				}
			}
		}
	}
	return 0;
}
