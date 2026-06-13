#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> apples(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> apples[i];
        total += apples[i];
    }

    long long ans = LLONG_MAX;

    for (int mask = 0; mask < (1 << n); mask++) {
        long long group1 = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                group1 += apples[i];
            }
        }

        long long group2 = total - group1;
        ans = min(ans, abs(group1 - group2));
    }

    cout << ans << "\n";

    return 0;
}