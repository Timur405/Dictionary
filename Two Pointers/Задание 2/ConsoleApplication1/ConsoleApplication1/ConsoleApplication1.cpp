#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector<int>Res;
	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		int countB;
		vector<char>abc;
		string BW;
		cin >> BW;
		for (char s : BW) {
			abc.push_back(s);
		}
		if (n == k) {
			int count;
			for (int q = 0; q < abc.size(); q++) {
				if (abc[q] == 'W') {
					count++;
				}
			}
			Res.push_back(count);
		}
		else {

		}
	}
}
