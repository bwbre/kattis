/*
Brendan Womer
Kattis Problem: Triangle Area
Difficulty: 1.2

---------------
-Explanation: Per-Magnus managed to solve his addition homework thanks to you, but now he is unfortunately posed with an even greater problem. 
  He has been given a triangular cake by his mother, and wonders what the area of it is. It turns out Per-Magnus forgot the formula for computing it!
  Per-Magnus managed to measure the base and height of the triangle with a ruler. Given this, compute the area of the triangular cake.

-Input:
The input consists of a single line with two integers for height and base of triangle:
    1 <= h <= 1000
    1 <= b <= 1000


-Output:
Output a single number, the area of the triangle. Your answer must be correct within an absolute or relative error of 10^-7.
    .0000001

---------------

Notes: 
simply calculate area of triangle 
**does not mention what type of triangle, I am assuming it's a right triangle based on the examples**
(1/2)*b*h

    initialize base and height
    calculate
    print

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int b=0, h=0; // base and height
    float area = 0;

    cin >> b >> h;
    area = (b*h)/2;
    cout <<  area;

    return 0;
}