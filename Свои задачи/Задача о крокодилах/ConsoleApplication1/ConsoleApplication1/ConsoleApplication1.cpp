// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	map<int, vector<char>>prahdeda;
	int count;
	for (int i = 0; i < n; i++) {
		string x;
		for (char c : x) {
			prahdeda[i].push_back(c);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int q = 0; q < n; q++) {
			if (prahdeda[i][q] == 'N') {
				if (prahdeda.count(i - 1) == 0 or prahdeda[i-1][q] == '.') {
					count++;
					prahdeda[i][q] == '.';
				}
			}
			else if (prahdeda[i][q] == 'S') {
				if (prahdeda.count(i + 1) == 0 or prahdeda[i + 1][q] == '.') {
					count++;
					prahdeda[i][q] == '.';
				}
			}
			else if (prahdeda[i][q] == 'W') {
				if (q == 0 or prahdeda[i][q-1] == '.') {
					count++;
					prahdeda[i][q] == '.';
				}
			}
		}
	}
}
