// https://cses.fi/problemset/task/1754

#include <stdio.h>
#include <iostream>

using namespace std;

void emptyPile(long long a, long long b){
    if(max(a, b) <= 2 * min(a, b) && (a + b) % 3 == 0){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main() {
    long long n;
    cin >> n;
    
    for(long long i = 0; i < n; i++){
        long long a = 0, b = 0;
        cin >> a; cin >> b;
        emptyPile(a, b);
    }

}