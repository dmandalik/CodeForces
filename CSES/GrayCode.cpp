// https://cses.fi/problemset/task/2205

#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
    int n;

    cin >> n;

    int total = 1 << n; // 2^n
    
    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1);
        for (int bit = n - 1; bit >= 0; bit--) {
            cout << ((gray >> bit) & 1);
        }
        cout << "\n";
    }

    return 0;
    
}