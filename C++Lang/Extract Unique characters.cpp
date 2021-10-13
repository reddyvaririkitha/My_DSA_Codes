// Given a string S, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same, as in the input string.
// Input format:
// The first and only line of input contains a string, that denotes the value of S.
// Output format :
// The first and only line of output contains the updated string, as described in the task.
// Constraints :
// 0 <= Length of S <= 10^8
// Time Limit: 1 sec
// Sample Input 1 :
// ababacd
// Sample Output 1 :
// abcd
// Sample Input 2 :
// abcde
// Sample Output 2 :
// abcde


#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

string uniqueChar(string str) {
	// Write your code here
    unordered_set<char> charSet;
    string answer; //output string
    for(char ch:str){  //here ch is a char and it takes every single letter of the input string we can also do it by taking i where ch is equivalent to str[i]
        if(charSet.find(ch) == charSet.end()){ //if h is not in the set
            answer.push_back(ch);   // add ch to the answer- output
            charSet.insert(ch);  // insert it into the set for further ref.
        }
    }
    return answer;

}


int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}
