/*
Brendan Womer
Kattis Problem: Echo Echo Echo
Difficulty: 1.1 - 1.2

---------------
-Explanation: 
If you have ever visited a canyon or a cave, you may have yelled and heard the echo of your own voice. In this problem, 
    you should simulate that effect: "Hello! Hello! Hello!"

Your program will be given as input a single word, and it should print out that word three times, separating the words with spaces.

-Input
 Input is a single line, containing exactly one word. The only characters used are upper and/or lowercase letters (a–z). The word contains at least one and at most 15 characters.

-Output
 Output the given word three times, separated by spaces.

---------------

Notes: 
accept string that is 1-15 char long, then print 3 times separated by spaces

    initialize string
    print string 3 times separated by spaces
*/

#include <iostream>

using namespace std;

int main() {
    string str; //string to be echo-ed
    int num = 3; // num times string to be echo-ed default is 3 **extra and unnecessary, just for funsies**
    cin >> str;

    for (int i = 0; i < num; i++) {
        if (i != num-1) {
            cout << str << " ";
        }
        else {
            cout << str;
        }
    }

}