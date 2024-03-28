/*
Odd Echo
1.3
https://open.kattis.com/problems/oddecho
Brendan Womer
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string words[n];
    for (int i=0; i < n; i++) {
        cin >> words[i];
    }
    for (int i=0; i < n; i++) {
        if (i%2 == 0) {
            cout << words[i] << endl;
       }
    }
    return 0;
}