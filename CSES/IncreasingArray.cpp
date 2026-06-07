// https://cses.fi/problemset/task/1094

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

long long increasingArr(long long n){
    long long moves = 0;
    long long prev = 0, curr = 0;
    cin >> prev;
    for(long long i = 0; i < n - 1; i++){
        cin >> curr;
        if(prev > curr){ moves += prev - curr; curr = prev; }
        prev = curr;
    }
    return moves;
}

int main(){
    long long n = 0;
    cin >> n;
    cout << increasingArr(n) << "\n";
}