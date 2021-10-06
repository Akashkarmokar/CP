#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7; 
const int MAX_OF_CATALAN = 1e4;


int catalan[MAX_OF_CATALAN];


bool isItBBS(string s){
	/* if one type of bracket is allowed 
	int len = (int)s.size();
	int depth  = 0;
	bool BBS = true;
	for(int i=0;i<len;i++){
		if(s[i]=='('){
			depth++;
		}else{
			depth--;
		}

		if(depth<0){
			BBS = false;
			break;
		}
	}

	if(depth != 0){
		BBS = false;
	}
	return BBS;
	*/

	/* If multiple type bracket sequences are allowed we need to use stack Data-Structure
		It also work for single bracket option
	*/
	stack<char> st;
	bool BBS = true;
	int len = (int)s.size();
	for(int i=0;i<len;i++){
		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			st.push(s[i]);
			continue;
		}

		if(st.empty()){
			BBS = false;
			return false;
		}
		int top = st.top();
		switch (s[i]){
			case ')':
				if(top == '{' || top == '[')
					return false;
				else
					st.pop();
				break;

			case '}':
				if(top == '(' || top == '[')
					return false;
				else
					st.pop();
				break;

			case ']':
				if(top == '(' || top == '{')
					return false;
				else
					st.pop();
				break;
		}
	}

	if(st.size()){
		BBS = false;
	}
	return BBS;
}

/* Time Complexity: O(n)
	This function computes in O(n) time the next balanced bracket sequence, and returns false if there is no next one.
*/
bool next_balance_sequence(string &s){
	int n = s.size();
	int depth = 0;
	for(int i=n-1;i>=0;i--){
		if(s[i] == '('){
			depth--;
		}else{
			depth++;
		}

		if(s[i]=='('  && depth > 0){
			depth--;
			int open = (n-1-i-depth)/2;
			int close =  (n-1-i) - open;
			string next = s.substr(0,i)+')'+string(open,'(')+string(close,')');
			s.swap(next);
			return true;
		}
	}

	return false;
}

/*
	Number of balance bracket sequences 
	The number of Balance Bracket Sequences with only one bracket can be calculated by CATALAN NUMBER.
	Here we use Dynamic Programming to calculate catalan number series or 
	Number of balance bracket sequence for n pair of bracket

*/

void initCatalan(int maxNumber){
	if(maxNumber> MAX_OF_CATALAN){
		cout<<"maxNumber is greater than MAX value"<<endl;
		return;
	}
	catalan[0] = catalan[1] = 1;
	for(int i=2;i<=maxNumber;i++){
		catalan[i] = 0;
		for(int j=0;j<i;j++){
			catalan[i] +=(catalan[j] * catalan[(i-1)-j])%MOD;
			if(catalan[i]>=MOD){
				catalan[i] -= MOD;

			}
		}
	}
}

int main(){
	string s = "(())()";
	cout<<(isItBBS(s)?"YES":"NO")<<endl;
	bool changed = next_balance_sequence(s);
	cout<<s<<endl;
	return 0;
}