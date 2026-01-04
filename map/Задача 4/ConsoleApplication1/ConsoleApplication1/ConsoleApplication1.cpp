//https://codeforces.com/problemset/problem/1669/B
#include <map>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t; 
	cin >> t;
	vector<int>hueta;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		map<int, int>lmao;
		vector<int>hui;

		for (int q = 0; q < n; q++) {
			int a;
			cin >> a;
			lmao[a]++;
			hui.push_back(a);
		}


		bool Flag =0;
		for (int l = 0; l < hui.size(); l++) {
			if (lmao[hui[l]] >= 3) {
				hueta.push_back(hui[l]);
				Flag = 1;
				break;
			}
		}


		if (Flag == 0) {
			hueta.push_back(-1);
		}
	}


	for (int pl = 0; pl < hueta.size(); pl++) {
		cout << hueta[pl] << endl;
	}
}
