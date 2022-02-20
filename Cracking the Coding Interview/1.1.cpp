#include <string>
#include <vector>
#include <iostream>
#include <bitset>
#include <unordered_set>
using namespace std;

bool isUniqueChars(const string &str) {
	unordered_set<char> wordMap;
	for (int i = 0; i < str.length(); i++) {
	    if (wordMap.find(str[i]) != wordMap.end()) return false;
	    wordMap.insert(str[i]);
	}
	return true;
}

int main() {
	vector<string> words = {"abcde", "hello", "apple", "kite", "padle"};
	for (auto word : words)	{
		cout << word << string(": ") << boolalpha << isUniqueChars(word) <<endl;
	}
	return 0;
}