#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>abc;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		if ((x * x + 1) % 2 == 0 and (x * x + 1) / 2 >= 2) {
			abc.push_back(2);
			abc.push_back((x * x + 1) / 2);
		}
		else if ((x * x + 1) % 5 == 0 and (x * x + 1) % 2 != 0 and (x * x + 1) / 5 >= 2) {
			abc.push_back(5);
			abc.push_back((x * x + 1) / 5);
		}
		else {
			abc.push_back(-1);
		}
	}
	for (int i = 0; i < abc.size(); i++) {
		if (abc[i] != -1) {
			cout << abc[i] << " " << abc[i + 1] << endl;
			i++;
		}
		else {
			cout << abc[i] << endl;
		}
	}
}