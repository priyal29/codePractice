#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isParanthesisBalanced(string str)
{
	bool ret = false;
	stack<char> st;
	char temp;
	for(int i=0; i<str.length(); i++){	
		if(str[i] == '{' || str[i] == '[' || str[i] == '('){
			st.push(str[i]);
			continue;
		}

		if(st.empty())
			return false;

		switch(str[i]){
		case ')':
			temp = st.top();
			st.pop();
			if(temp != '(')
				return false;
			break;
                case '}':
                        temp = st.top();
                        st.pop();
                        if(temp != '{')
                                return false;
                        break;
                case ']':
                        temp = st.top();
                        st.pop();
                        if(temp != '[')
                                return false;
                        break;
		}
	}
	return (st.empty());
}

int main()
{
	string str;
	bool ret =  false;
	cout << "enter input string: \n";
	cin >> str;

	if(isParanthesisBalanced(str))
		cout << "paranthesis are balanced \n";
	else
		cout << "paranthesis are not balanced \n";
	return 0;
}

