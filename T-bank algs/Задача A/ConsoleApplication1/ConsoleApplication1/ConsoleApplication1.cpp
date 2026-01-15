#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i*i < n; i++) {
		for(int q = 0; q*q < n-i*i; q++){
			for (int x = 0; x * x < n - (i * i + q * q); x++) {
				for(int y = 0; y*y <= n - (i*i + q*q + x*x);y++){
					if ((i * i + q * q + x * x + y * y) == n) {
						cout << i << " " << q << " " << x << " " << y;
						return 0;
					}
				}
			}
		}
	}
}
