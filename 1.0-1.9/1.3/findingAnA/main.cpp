/*
Finding An A
1.2
Brendan Womer
https://open.kattis.com/problems/findingana
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'a') {
            word.erase(0, i);
            break;
        }
    }
    cout << word;
    return 0;
}