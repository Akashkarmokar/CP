
#include <bits/stdc++.h> 
using namespace std;  
int product(int x) 
{ 
	int prod = 1; 
	while (x) { 
		prod *= (x % 10); 
		x /= 10; 
	}
    //cout<<prod<<endl; 
	return prod; 
}  
int findNumber(int l, int r) 
{  
	string a = to_string(l); 
	string b = to_string(r);  
	int ans = r; 
	for (int i = 0; i < b.size(); i++) { 
		if (b[i] == '0') 
			continue;  
		string curr = b;
		// cout<<curr[i]<<endl;
		// cout<<(curr[i]-'0')-1<<endl;
		curr[i] = ((curr[i] - '0') - 1) + '0';  
		//cout<<"curr i value is :"<<curr[i]<<endl;
		for (int j = i + 1; j < curr.size(); j++) 
			curr[j] = '9';  
		int num = 0; 
		for (auto c : curr) 
			num = num * 10 + (c - '0');  
		if (num >= l && product(ans) < product(num)) 
			ans = num;
	} 

	return ans; 
}  
int main() 
{ 
	int r;
    cin>>r;
	//cout << findNumber(1, r) << endl; 
    // int num = findNumber(1,r);
    // int res=1;
    // while(1){
    //     res = res*(num%10);
    //     num = num/10;
    //     // cout<<"REs is : "<<res<<endl;
    //     // cout<<"num is : "<<num<<endl;
    //     if(num == 0) break;
    // }
    // cout<<res<<endl;
	cout<<product(findNumber(1,r))<<endl;
	return 0; 
} 
