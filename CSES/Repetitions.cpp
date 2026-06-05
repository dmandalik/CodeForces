// https://cses.fi/problemset/task/1069

#include <stdio.h>
#include <iostream>

using namespace std;

int maxRepetition(string sequence){
    int best = 1, curr = 1;
    for (int i = 1; i < sequence.size(); i++) {
        if (sequence[i] == sequence[i - 1]) {
            curr++;
        } 
        else { curr = 1; }
        if(curr > best){
            best = curr;
        }
    }
    return best;
}

int main(){
    string sequence;
    cin >> sequence;
    cout << maxRepetition(sequence) << "\n";
}