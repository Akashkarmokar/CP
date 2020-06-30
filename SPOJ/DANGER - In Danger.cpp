#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int mbs_pos(ull num)
{
	int pos = 0;
	while(num!=0)
	{
		num>>=1;
		pos++;
	}
	return pos;
}

int bitwise_josephus(ull num)
{
	int pos = mbs_pos(num);
	int j = 1<<(pos-1);
	num = num^j;
	num<<=1;
	num=num | 1;

	return num;
}

int main()
{
	string s;
	while(cin>>s)
	{
		if(s=="00e0")
			break;
		
		ull num = ((s[0]-48)*10+(s[1]-48))*pow(10,s[3]-48);
		// cout<<num<<" NUM"<<endl;
		if(num)
			cout<<bitwise_josephus(num)<<endl;
	}
	return 0;
}
