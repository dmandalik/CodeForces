// https://cses.fi/problemset/task/1072

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long k = 1; k <= n; k++) {
        long long totalSquares = k * k;
        long long totalWays = totalSquares * (totalSquares - 1) / 2;
        long long attackingWays = 4 * (k - 1) * (k - 2);
        cout << totalWays - attackingWays << "\n";
    }
}