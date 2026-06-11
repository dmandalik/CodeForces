// https://cses.fi/problemset/task/2205

#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
    long long n;
    cin >> n;
    
    n = n || (n - 1);
    cout << n;
    

}