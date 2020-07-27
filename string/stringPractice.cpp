#include <iostream>
#include <vector>
#include<string.h>
#include<stdio.h>
using namespace std;
vector<string> songs;

void insert(int num)
{
	char str[20];
	string temp;
	int i;
	for(i=1; i<=num; i++){
		sprintf(str, "song%d", i);
		//str  = "song";
		//string temp = to_string(i);
		//str += temp;
		temp = str;
		int len = strlen(str);
		cout << len;
		songs.push_back(temp);
	}
}

void print()
{
	for(int i=0; i<songs.size(); i++)
		cout << songs[i] << " ";
}

int main()
{
	int num;
	cout << "enter total number = " << endl;
	cin >> num;
	insert(num);
	print();
	cout << endl;
	return 0;
}
