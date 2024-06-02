/*
Brendan Womer
Kattis Problem: Quadrant Selection
Difficulty: 1.2

---------------
-Explanation: A common problem in mathematics is to determine which quadrant a given- 
    point lies in. There are four quadrants, numbered from 1 to 4, as shown in the diagram below:
        (4 coordinates on cartesian plane: [ B: (-12,5); A:(12,5); C:(-12,-5); D:(12,-5) ]

For example, the point A, which is at coordinates (12,5) lies in quadrant 1 since- 
    both its x and y values are positive, and point B lies in quadrant 2 since its X value is negative and its Y value is positive.

Your job is to take a point and determine the quadrant it is in. You can assume that neither of the two coordinates will be 0.

-Input
The first line of input contains the integer x (-1000 <= x <= 1000; x!=0). 
The second line of input contains the integer y (-1000 <= y <= 1000; y!=0).

-Output
Output the quadrant number (1 , 2, 3, or 4) for the point (x, y).
---------------
Notes: 
simple program, accept two numbers one at a time, first X, second Y.
-steps:
    declare int X, Y
    accept X, Y
    conditional:
        (#,#) - Q1
        (-#,#) - Q2
        (-#,-#) - Q3
        (#, -#) - Q4
    Print Quadrant (1, 2, 3, or 4)

*/

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "1";
    }
    else if (x < 0 && y > 0) {
        cout << "2";
    }
    else if (x < 0 && y < 0) {
        cout << "3";
    }
    else {
        cout << "4";
    }

    return 0;
}


