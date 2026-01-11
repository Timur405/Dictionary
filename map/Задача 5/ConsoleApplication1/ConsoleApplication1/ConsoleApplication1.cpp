//https://codeforces.com/problemset/problem/499/B

#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	map<string,string>lap;


	int n, m; //Кол во слов в лекции, кол во слов из языков
	cin >> n >> m;
	vector<string>wordslap;
	
	
	for (int i = 0; i < m; i++) {
		string word1, word2;
		cin >> word1 >> word2;

		if (word1.length() <= word2.length()) {
			lap[word1] = word1;
		}
		else {
			lap[word1] = word2;
		}
	}


	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		wordslap.push_back(word);
	}
	

	for (int q = 0; q < wordslap.size(); q++) {
		cout << lap[wordslap[q]] << " ";
	}
}
