#include<iostream>

struct trieNode{
	trieNode* children[26];
	bool isEndOfWord;
};

void insert(trieNode* root, string key)
{
	trieNode* cur = root;
	int index;
	for(int i=0; i<key.length(); i++){
		index = key[i] - 'a';
		if(!cur->children[index]) {
			cur->children[index] = getNode();
		}
		cur = cur->children[index];
	}
	cur->isEndOfWord = true;
}

bool search(trieNode* root, string key);
{
	trieNode* cur = root;
	for(int i=0; i<key.length(); i++) {
		int index = key[i] - 'a';
		if(!cur->children[index])
			return false;
		cur = cur->children[index];
	}
	return (cur != NULL && cur->isEndOfWord);
}
