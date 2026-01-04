#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;


	map<string, int>school = {
		{"1", 0},
		{"2", 0},
		{"3", 0}
	};


	vector<int>ind1, ind2, ind3;

	for (int i = 0; i < n; i++) {
		string people; 
		cin >> people;

		if (people == "1") {
			school["1"] += 1;
			ind1.push_back(i + 1);
		}

		else if (people == "2") {
			school["2"] += 1;
			ind2.push_back(i + 1);
		}

		else {
			school["3"] += 1;
			ind3.push_back(i + 1);
		}
	}

	int imin = school["1"];

	if (imin > school["2"]) {
		imin = school["2"];
	}
	if (imin > school["3"]) {
		imin = school["3"];
	}

	if (imin == 0) {
		cout << "0";
	}
	else {
		cout << imin << endl;

		for (int q = 0; q < imin; q++) {
			cout << ind1[q] << " "
				<< ind2[q] << " "
				<< ind3[q] << endl;
		}
	}
}
