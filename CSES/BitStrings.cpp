// https://cses.fi/problemset/task/1617

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long count = 1;
    for(long long i = 0; i < n; i++){
        count *= 2;
        count = count % 1000000007;
    }
    cout << count << "\n";


}