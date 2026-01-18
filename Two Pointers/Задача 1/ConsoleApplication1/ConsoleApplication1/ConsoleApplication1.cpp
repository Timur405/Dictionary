#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, t;
	vector<int>abc;
	cin >> n >> t;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int x; 
		cin >> x;
		abc.push_back(x);
	}
	for (int l = 0; l < abc.size(); l++) {
		int imin = abc[l];
		int count2 = 1;
		for (int r = l+1; r < abc.size(); r++) {
			if (imin + abc[r] > t) {
				break;
				if (count < count2) {
					count = count2;
				}
			}
			else {
				imin += abc[r];
				count2++;
			}
		}
	}
	cout << count;
}
