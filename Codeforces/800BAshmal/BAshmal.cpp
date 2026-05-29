// https://codeforces.com/problemset/problem/2180/B

#include <stdio.h>
#include <iostream>
using namespace std;


// Returns true if first word comes before second
bool comesFirst(string word, string word2){ 
    for(int i = 0; i < word.length() || i < word2.length(); i++){
        if((int)word[i] > (int)word2[i]){
            return false;
        }
        else if((int)word2[i] > (int)word[i]){ 
            return true;
        }
    }
    if(word.length() > word2.length()){ return true; }
    return true;
}

// Accepts number of strings as input, sorts strings lexicographically and prints out
void lexicoSort(int numberOfStrings){
    string inputs;
    cin >> inputs;
    for(int i = 1; i < numberOfStrings; i++){
        string temp;
        cin >> temp;
        if(!comesFirst(inputs, temp)){
            inputs = temp + inputs;
        }
        else{
            inputs += temp;
        }
    }
    cout << inputs << "\n";
}

int main(void){
    int testCases, numberOfStrings;
    cin >> testCases;

    for(int i = 0; i < testCases; i++){
        cin >> numberOfStrings;
        lexicoSort(numberOfStrings);
    }

    return 0;



}