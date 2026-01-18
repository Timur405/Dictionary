#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v{ 0, 0, 0, 0, 100000000, 0, 0, 0 };
    int summ = 0;
    int totalsumm = 0;
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << "\n";
    for (int i = 0; i < v.size();i++) {
        summ += v[i] * i - (totalsumm);
        totalsumm += v[i];
    }
    cout << summ;
}