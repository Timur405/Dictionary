#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n; 
	cin >> n;
	vector<int>abc;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		abc.push_back(x);
	}
	int l, r;
	l = 0;
	r = abc.size() - 1;
	long long s1, s2;
	s1 = abc[l];
	s2 = abc[r];
	long long answ = 1000000000100;
	int ansl, ansr;
	while (r - l > 0) {
		if (abs(s1 - s2) < answ) {
			answ = abs(s1 - s2);
			ansl = l;
			ansr = r;
		}
		if (s1 < s2) {
			l++;
			s1 = s1 + abc[l];
		}
		else {
			r--;
			s2 = s2 + abc[r];
		}
	}

	cout << answ << " " << ansl+1 << " " << ansr+1 << endl;
}
