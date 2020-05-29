#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isRedundantBraces(string str)
{
	int b = 0, s = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i] == '(' && str[i+2] == ')')
			return 1;
		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			s++;
		else if(str[i] == '(')
			b++;

		if(b > s)
			return true;

	}
	return false;
}

int main()
{
	string str;
	cout << "enter input = \n";
	cin >> str;

	if(isRedundantBraces(str))
		cout << "Braces are redundant \n";
	else
		cout << "No\n";
	return 0;
}
