
// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note : 1. The order of strings are not important.
// 2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
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
        default:
            return "";
    }
}

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num == 0){
        output[0]="";
        return 1;
    }
    int lastdigit = num %10;
    int smallnum = num /10;
    int smalloutputsize = keypad(smallnum, output);
    string options = getstring(lastdigit);
    // cout<<"num="<<num<<", lastdigit="<<lastdigit<<", smallnum="<<smallnum<<", smalloutputsize="<<smalloutputsize<<"and options= "<<options<<endl;
    for(int i=0;i<options.length();i++){
        for(int j=0;j<smalloutputsize ; j++){
            output[j + (i+1)*smalloutputsize] = output[j];
            // cout<<"i="<<i<<", j="<<j<<" and output[j + (i+1)*smalloutputsize] = output["<<j + (i+1)*smalloutputsize<<"]="<<output[j + (i+1)*smalloutputsize]<<endl;
        }
    }
    
    int k = 0;
    
    for(int i=0;i<options.length();i++){
        for(int j=0;j<smalloutputsize ; j++){
            output[k] = output[k] + options[i];
            k++;
            // cout<<"i="<<i<<", j="<<j<<", k="<<k<<"output[i] = output["<<i<<"]="<<output[i]<<",  output[k] = output["<<k<<"]="<<output[k]<<endl;
        }
    }
    return smalloutputsize*(options.length());
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
