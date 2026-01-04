#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	map<string, int>football;
	vector<string>players;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		if (football.count(x) == 0) {
			football[x] = 1;
			players.push_back(x);
		}
		else {
			football[x] += 1;
		}
	}
	if (players.size() == 2) {

		if (football[players[0]] < football[players[1]]) {
			cout << players[1];
		}
		else {
			cout << players[0];
		}
	}
	else {
		cout << players[0];
	}
}