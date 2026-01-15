#include <iostream>
#include <vector>
using namespace std;

const int MOD = 100000007;

int main() {
    int n, k;
    cin >> n >> k;

    if (n == 1) {
        cout << k % MOD << endl;
        return 0;
    }

    vector<vector<int>> up(n + 1, vector<int>(k + 1, 0));
    vector<vector<int>> down(n + 1, vector<int>(k + 1, 0));

    for (int x = 1; x <= k; ++x) {
        up[1][x] = 1;
        down[1][x] = 1;
    }

    for (int i = 2; i <= n; ++i) {
        vector<int> prefix_down(k + 1, 0);
        vector<int> suffix_up(k + 2, 0);

        for (int x = 1; x <= k; ++x) {
            prefix_down[x] = (prefix_down[x - 1] + down[i - 1][x]) % MOD;
        }
        for (int x = k; x >= 1; --x) {
            suffix_up[x] = (suffix_up[x + 1] + up[i - 1][x]) % MOD;
        }

        for (int x = 1; x <= k; ++x) {
            up[i][x] = prefix_down[x - 1];
            down[i][x] = suffix_up[x + 1];
        }
    }

    long long total = 0;
    for (int x = 1; x <= k; ++x) {
        total = (total + up[n][x] + down[n][x]) % MOD;
    }
    cout << total % MOD << endl;

    return 0;
}