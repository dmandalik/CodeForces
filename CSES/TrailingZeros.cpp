// https://cses.fi/problemset/task/1618

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long count = 0;
    for (long long power = 5; power <= n; power *= 5) {
        count += n / power;
    }
    cout << count << "\n";

}