#include <bits/stdc++.h>
using namespace std;

void solve(int n, int from, int helper, int to) {
    if (n == 0) return;

    solve(n - 1, from, to, helper);

    cout << from << " " << to << "\n";

    solve(n - 1, helper, from, to);
}

int main() {
    int n;
    
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    solve(n, 1, 2, 3);
    return 0;
}