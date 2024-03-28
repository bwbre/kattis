/*
Brendan
3/6/2024
Kattis - 1.2

name: Viðsnúningur

doesnt wanna read right to left. write program to reverse a string so it can be read left from right.
*/

#include <iostream>

using namespace std;

void reverse(string, int);

int main() {

    string input;
    int length=0;
    cin >> input;
    length = end(input) - begin(input);
    reverse(input, length);

    return 0;
}

void reverse(string input, int length) {
    string output[length];
    for (int i = 0; i < length; i++) {
        output[i] = input[length - i - 1];
    }
    for (int i = 0; i < length; i++) {
        cout << output[i];
    }
}