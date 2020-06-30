#include<iostream>
#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main() {
	int test_case;
	scanf("%d", &test_case);
	getc(stdin);
	for(int j =0;j<test_case;j++) {
		stack<char> parentheses;
		char s[140];
		gets(s);

		int len = strlen(s);
		for (int i = 0; i < len; i++) {
			if (s[i] == '(' || s[i] == '[') {
				parentheses.push(s[i]);
			} else if (s[i] == ')') {
				if (parentheses.empty() || parentheses.top() != '('){
					parentheses.push(s[i]);
					break;
				}
				else{
                    parentheses.pop();
				}
			} else if (s[i] == ']') {
				if (parentheses.empty() || parentheses.top() != '['){
					parentheses.push(s[i]);
					break;
				}
				else{
                    parentheses.pop();
				}
			}
		}

		if(parentheses.empty()){
          printf("Yes\n");
		}
		else{
          printf("No\n");
		}
	}

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
**
*
*
*
Inputs:
25
([)
[[[()
]))]())()
[[]()](

[[([]()
)]
]((]
[))[)(]
[]]()
])]((]()(]
]()[[))]
](](
[]
][[[[]]
]([
][
[)(
())]
[[(]
[[]]][(
[]]]])
()
([)[)([]]
]
*/
