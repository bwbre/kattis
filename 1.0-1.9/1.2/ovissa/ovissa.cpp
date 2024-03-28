/*
Brendan
kattis - 1.2
name: Ovissa

count number of 'u' inputted
    l - 100,000*/
#include <iostream>
using namespace std;

int main() {
    string input;
    int count = 0;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'u') {
            count++;
        }
    }
    cout << count;
    return 0;
}