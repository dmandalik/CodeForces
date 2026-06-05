// https://cses.fi/problemset/task/1068

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void weirdAlgo(long long n){
    while(n != 1){
        cout << n << " ";
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n = n * 3 + 1;
        }
    }
    cout << n << " " << "\n";
}

int main(){
    long long n = 0;
    cin >> n;
    weirdAlgo(n);
}