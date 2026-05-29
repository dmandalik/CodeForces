// https://usaco.org/index.php?page=viewproblem2&cpid=664

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;


int main(){
    int n = 0;
    map<char, int> maxBlocks, localBlocks;
    cin >> n;

    for(int i = 0; i < n; i++){
        string word1, word2;
        cin >> word1 >> word2;
        map<char, int> count1, count2;
        for (char c : word1) {
            count1[c]++;
        }
        for (char c : word2) {
            count2[c]++;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            maxBlocks[c] += max(count1[c], count2[c]);
        }
        localBlocks.clear();
    }

    char c = 'a' - 1;
    while(c != 'z'){
        c++;
        cout << maxBlocks[c] << "\n";
    }
    return 0;
}