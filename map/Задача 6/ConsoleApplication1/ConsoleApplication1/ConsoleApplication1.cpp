//https://codeforces.com/problemset/problem/141/A

#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main(){

	map<char, int>word;
	bool Flag = 0;
	string word1, word2, word3;

	cin >> word1;
	cin >> word2;
	cin >> word3;

	for (char c : word3) {
		if (word.count(c) == 0) {
			word[c] = 1;
		}
		else {
			word[c]++;
		}
	}

	for (char a : word1) {
		if (word.count(a) == 0) {
			break;
			Flag = 1;
		}
		else {
			word[a]--;
		}
	}

	for (char a : word2) {
		if (word.count(a) == 0) {
			break;
			Flag = 1;
		}
		else {
			word[a]--;
		}
	}

	for (char c : word3) {
		if (word[c] != 0) {
			Flag = 1;
		}
	}

	if (Flag == 1) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
}
