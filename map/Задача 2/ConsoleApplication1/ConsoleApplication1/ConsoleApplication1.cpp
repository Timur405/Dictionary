#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string,int>log;
	vector<string>var;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		if(log.count(name) == 0){
			log[name] = 0;
			var.push_back("OK");
		}
		else {
			int a = 1;
			while (true) {
				if (log.count(name + to_string(a)) == 0) {
					log[name + to_string(a)] = 0;
					var.push_back(name + to_string(a));
					break;
				}
				else{
					a++;
				}
			}
		}
	}
	for (int i = 0; i < var.size(); i++) {
		cout << var[i] << endl;
	}
}