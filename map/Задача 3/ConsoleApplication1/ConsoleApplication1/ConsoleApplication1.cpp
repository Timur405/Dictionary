#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
	map<char,int>words;
	vector<char>wordle;
	int summ;
	for (int i = 0; i < 2; i++) {
		string x;
		cin >> x;
		for (char c : x) {
			if (words.count(c) == 0) {
				words[c] = 1;
				wordle.push_back(c);
			}
			else {
				words[c] += 1;
			}
		}
	}
	string word;
	for (char k : word) {
		if (words.count(k) == 0) {
			break;
			cout << "NO";
		}
		else {
			if (words[k] - 1 < 0) {
				break;
				cout << "N0";
			}
			else {
				words[k] = words[k] - 1;
			}
		}
	}
	for (int l = 0; l < wordle.size() - 1; l++) {
		if (words[wordle[l]] = 0) {
			summ++;
		}
		else {
			break;
			cout << "NO";
		}
	}
	if (summ == wordle.size()) {
		cout << "Yes";
	}
}
