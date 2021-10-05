#include <bits/stdc++.h>
using namespace std;

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

int main(){
	string s = "(())()";
	cout<<(isItBBS(s)?"YES":"NO")<<endl;
	bool changed = next_balance_sequence(s);
	cout<<s<<endl;
	return 0;
}