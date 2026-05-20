// https://usaco.org/index.php?page=viewproblem2&cpid=987

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int n = 0, k = 0, currLen = 0;
    cin >> n >> k;
    string newLine = "", fullSeq = "";

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        if (currLen + temp.length() <= k) {
            if (!newLine.empty()) newLine += " ";
            newLine += temp;
            currLen += temp.length();
        } else {
            if (!fullSeq.empty()) fullSeq += "\n";
            fullSeq += newLine;
            newLine = temp;
            currLen = temp.length();
        }
    }
    if (!fullSeq.empty()) fullSeq += "\n";
    fullSeq += newLine;
    cout << fullSeq << "\n";
}