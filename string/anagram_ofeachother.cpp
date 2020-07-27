/* anagram means, check whether string is permutation of string 2 or not and vice versa */
/*
1st approach - first check length of both strings, if not same we can return false. If length are same then, sort both the strings, if they are equal then they are anagrams of each other.
2nd approach - count frequency 
*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
#define size 256
bool isAnagram(string &str1, string &str2)
{
	if(str1.length() != str2.length()) return false;
#if 0
//1st approach
	sort(str1.begin(), str2.end());
	sort(str2.begin(), str2.end());
	return (str1 == str2);
#endif
	int count[size] = {0};
	for(int i=0; i<str1.length(); i++){
		count[str1[i]]++;
		count[str2[i]]--;
	}

	for(int i=0; i<size; i++){
		if(count[i] != 0) return false;
	}
	return true;
}

int main()
{
	string str1, str2;
	cout << "enter string 1" << endl;
	cin >> str1;
	cout << "enter string 2" << endl;
	cin >> str2;
	bool res = isAnagram(str1, str2);
	if(res) cout << "both strings are anagrams" << endl;
	else cout << "both strings are not anagrams" << endl;
	return 0;
}
