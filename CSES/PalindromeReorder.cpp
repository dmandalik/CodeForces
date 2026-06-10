// https://cses.fi/problemset/task/1755

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> count(26, 0);

    for (char c : s) {
        count[c - 'A']++;
    }
    int oddCount = 0;
    int oddIndex = -1;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            oddCount++;
            oddIndex = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string firstHalf = "";
    string middle = "";

    for (int i = 0; i < 26; i++) {
        firstHalf += string(count[i] / 2, char('A' + i));
    }
    if (oddIndex != -1) {
        middle = string(count[oddIndex], char('A' + oddIndex));
    }
    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());
    cout << firstHalf << middle << secondHalf << "\n";

}