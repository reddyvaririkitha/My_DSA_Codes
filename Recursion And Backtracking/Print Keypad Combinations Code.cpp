// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
// Input Format :
// Integer n
// Output Format :
// All possible strings in different lines
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 23
// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>
using namespace std;


string getstring(int num){
    switch(num){
        case 2:
            return "abc";
        case 3:
            return "def";
        case 4:
            return "ghi";
        case 5:
            return "jkl";
        case 6:
            return "mno";
        case 7:
            return "pqrs";
        case 8:
            return "tuv";
        case 9:
            return "wxyz";
        case 1:
            return "";
    }
}

void keypadprint(int num, string output){
    if(num==0){
        cout<<output<<endl;
        return;
    }
    
    int lastdigit = num %10;
    int smallnum = num /10;
    string options = getstring(lastdigit);
    
    for(int i=0;i<options.length();i++){
        keypadprint(smallnum, options[i]+output);
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output="";
    keypadprint(num, output);
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
