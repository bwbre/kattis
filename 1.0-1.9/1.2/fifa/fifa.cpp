/*
Brendan
3/6/2024
Kattis - 1.2 
name: (ssomething) fifa

Since you know the FIFA games only receive

improvements every year, and you know you entered the FreezeChamber 9000 in the year 2022, you can determine what year it is.
Input

The input consists of two lines. The first line contains an integer
(), the number of improvements since you were frozen. The second line contains an integer (), the number of improvements the game receives every year. Every year there is one new version of the game released and it’s released on the first day of the year.
*/

#include <iostream>

using namespace std;

int main() {
    int peryear, numimprove;
    cin >> numimprove >> peryear;
    cout << (2022 + (numimprove / peryear));
    return 0;
}