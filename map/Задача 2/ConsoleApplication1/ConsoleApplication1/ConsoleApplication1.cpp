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
			log[name]++;
			var.push_back( name + to_string(log[name]));
		}
		
	}
	for (int i = 0; i < var.size(); i++) {
		cout << var[i] << endl;
	}
}