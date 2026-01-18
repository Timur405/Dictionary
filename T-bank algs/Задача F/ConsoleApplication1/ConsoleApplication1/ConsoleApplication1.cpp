#include <iostream>
#include <vector>
using  namespace std;

int main(){
	int N; 
	cin >> N;
	int A, B, C;
	int x = 0;
	vector<int>a;
	cin >> A >> B >> C;
	a.push_back(A);
	a.push_back(B);
	a.push_back(C);
	for (int i = 0; i < a.size(); i++) {
		if (N - a[i] >= 0 and x < a[i]) {
			x = a[i];
		}
	}
	cout << x;
}