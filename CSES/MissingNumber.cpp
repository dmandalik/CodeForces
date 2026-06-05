// https://cses.fi/problemset/task/1083

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

long long findMissingNum(long long n){
    long long sum = n * (n + 1) / 2;
    long long sumMissing = 0;
    for(long long i = 1; i <= n - 1; i++){
        long long temp = 0; 
        cin >> temp;
        sumMissing += temp;

    }
    return sum - sumMissing;
}

int main(){
    long long n = 0;
    cin >> n;
    cout << findMissingNum(n) << "\n";
}