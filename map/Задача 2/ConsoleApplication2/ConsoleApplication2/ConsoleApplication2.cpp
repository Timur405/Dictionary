#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;


	map<int, vector<int>>school = {
		{1, vector<int>{}},
		{2, vector<int>{}},
		{3, vector<int>{}}
	};

	for (int i = 0; i < n; i++) {
		int people; 
		cin >> people;
		school[people].push_back(i+1);
	}

	int imin = school[1].size();

	if (imin > school[2].size()) {
		imin = school[2].size();
	}
	if (imin > school[3].size()) {
		imin = school[3].size();
	}

	if (imin == 0) {
		cout << "0";
	}
	else {
		cout << imin << endl;

		for (int q = 0; q < imin; q++) {
			cout << school[1][q] << " "
				<< school[2][q] << " "
				<< school[3][q] << endl;
		}
	}
}
