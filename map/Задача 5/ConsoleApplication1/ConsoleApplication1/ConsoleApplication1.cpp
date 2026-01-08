#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	
	map<int, vector<string>>lap{
		{1,vector<string>{}},
		{2,vector<string>{}},
		{3,vector<string>{}},
		{4,vector<string>{}}
	};


	int n, m; //Кол во слов в лекции, кол во слов из языков
	cin >> n >> m;
	
	
	for (int i = 0; i < m; i++) {
		string word1, word2;
		cin >> word1 >> word2;
		lap[1].push_back(word1);
		lap[2].push_back(word2);
	}


	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		lap[3].push_back(word);
	}

	for (int q = 0; q < lap[3].size(); q++) {
		for (int l = 0; l < lap[1].size(); l++) {
			if (lap[3][q] == lap[1][l]) {
				if (lap[1][l].length() <= lap[2][l].length()) {
					lap[4].push_back(lap[1][l]);
				}
				else {
					lap[4].push_back(lap[2][l]);
				}
			}
		}
	}
	for (int i = 0; i < lap[4].size(); i++) {
		cout << lap[4][i] << " ";
	}

}
