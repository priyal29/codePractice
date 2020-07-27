#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str_in)
{
#if 0 
// not an optimal approach
	string rev = str_in;
	reverese(rev.begin(), rev.end());
	return (str_in == rev);
#endif
	int size = str_in.length();
	int start = 0, end = size-1;
	while(start < end){
		if(str_in[start] != str_in[end]) return false;
		start++;
		end--;
	}
	return true;
}

int main()
{
	string str;
	cout << "enter your string" << endl;
	getline(cin, str);
	bool res = isPalindrome(str);
	if(res) cout << "string is palindrome" << endl;
	else cout << "string is not palindrome" << endl;
	return 0;
}
