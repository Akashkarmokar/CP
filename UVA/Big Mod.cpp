/*
	Problem solved by Akash Karmokar Aditto
	Metropolitan University,Bangladesh.
	Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int mod_function(int base,int power,int mod){
	if(power==0) return 1;
	if(power%2==0){
		int rat = mod_function(base,power/2,mod);
		return (rat * rat)%mod;
	}
	else return (base%mod * mod_function(base,power-1,mod)%mod)%mod;
}
int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	

	long long int base,power,mod;
	while(cin>>base>>power>>mod){
			cout<<mod_function(base,power,mod)<<endl;
	}

	return 0;
}