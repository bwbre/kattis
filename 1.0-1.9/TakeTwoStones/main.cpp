/*
Take Two Stones
1.4
https://open.kattis.com/problems/twostones
Btendan Womer
*/

#include <iostream>

using namespace std;

int main() {
    int input;
    cin >> input;
    if (input % 2 == 0 || input == 0) {
        cout << "Bob";
        return 0;
    }
    cout << "Alice";
    return 0;
}