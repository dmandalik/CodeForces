// https://cses.fi/problemset/task/1070

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void beautifulPermutation(int n){
    if(n == 2 || n == 3){
        cout << "NO SOLUTION\n";
        return;
    }
    for(int i = 2; i <= n; i+=2){
        cout << i << " ";
    }
    for(int i = 1; i <= n; i+=2){
        cout << i << " ";
    }
    cout << "\n";
}

int main(){
    int n{}; cin >> n;
    beautifulPermutation(n);
}