#include <iostream>
#include <set>
#include <map>
using namespace std;

string buildStringInOrder(string input) {
    if (input[0] > input[1]) {
        return string(1, input[1]) + input[0];
    }
    return input;
}

void checkLine(char a, char b, char c, map<char, int>& individualWinners, map<string, int>& teamWinners) {
    set<char> cows;
    cows.insert(a);
    cows.insert(b);
    cows.insert(c);

    if (cows.size() == 1) {
        individualWinners[a]++;
    }
    else if (cows.size() == 2) {
        string team = "";
        for (char cow : cows) {
            team += cow;
        }
        teamWinners[team]++;
    }
}

int main() {
    string grid = "", input = "";
    map<char, int> individualWinners;
    map<string, int> teamWinners;

    cin >> input; grid += input;
    cin >> input; grid += input;
    cin >> input; grid += input;

    for (int i = 0; i < 3; i++) {
        // rows
        checkLine(grid[3*i], grid[3*i + 1], grid[3*i + 2], individualWinners, teamWinners);
        // columns
        checkLine(grid[i], grid[i + 3], grid[i + 6], individualWinners, teamWinners);
    }

    // diagonals
    checkLine(grid[0], grid[4], grid[8], individualWinners, teamWinners);
    checkLine(grid[2], grid[4], grid[6], individualWinners, teamWinners);

    cout << individualWinners.size() << "\n";
    cout << teamWinners.size() << "\n";

    return 0;
}