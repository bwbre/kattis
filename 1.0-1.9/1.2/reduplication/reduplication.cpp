/*
Brendan Womer
Kattis Problem: Reduplication
Difficulty: 1.1-1.2

---------------
-Explanation: 
Reduplication is when one repeats a word several times, often to reinforce or alter its meaning. In some languages, such as Indonesian, 
 reduplication is very common and serves various grammatical functions. Even in Swedish, reduplication is used occasionally, 
for example, saying "hej hej" instead of just "hej".

Rama is a diligent user of reduplication when chatting with his friends. He sometimes writes the same word up to nine times, 
 which takes a long time. Therefore, he usually writes the word once, followed by a number indicating how many times the word should be repeated.

Write a program that reads in a word Rama intends to repeat and how many times it should be repeated. 
 The program should then print the word repeated the correct number of times.

-Input:
 The first line of the input contains a string S (2 <= |S| <= 10), the word Rama wants to write. The word consists of letters from a-z.

 The next line contains a digit between and , the number of times Rama wants to write the word.

-Output:
 Print S as many times as the digit indicates.

Points: 
 Your solution will be tested on several test case groups. To get the points for a group, 
  it must pass all the test cases in the group.

  20 pts for digit is 1
  80 pts for no additional constraints

---------------
Notes: 
 string S will contain the word to be repeated
 int num will contain the number of times the S needs to repeat (1-9)
    initialize string S, and int num
    accept string S
    accept num
    print S, num times
*/

#include <iostream>

using namespace std;

int main() {
    string str; //contains string to be duplicated
    int num; //number of times string will be duplicated
    cin >> str; //accept string S
    cin >> num; //accept int num

    //print string num times.
    for (int i = 0; i < num; i++) { 
        cout << str; //print string
    }


    return 0;
}