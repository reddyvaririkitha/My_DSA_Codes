#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    // Shift operators- can be used instead of pow function with base 2.
    // pow function which takes log(i) time complexity but this takes log(1) complexity
    
    //left shift operator n<<i which gives n*(2^i) only applicable for positive numbers
    cout<<"left shift: "<< (n<<1) <<endl; 
    //right shift operator n>>i which gives n/(2^i) applicable for both positive and negative numbers
    cout<<"right shift: "<< (n>>1) <<endl; 
    cout<<"\n"<<endl;
    
    // Bitwise AND operator- &
    cout<<"Bitwise AND operator- &"<<endl;
    cout<<"1&0="<< (1&0)<<" , 0&1="<<(0&1)<<", 0&0="<<(0&0)<<", 1&1="<<(1&1) <<endl;
    //  x&0 = 0, x&x = x
    cout<<"4&0= "<< (4&0) <<", 4&1= "<< (4&1) <<", 4&4= "<< (4&4) <<endl;
    // 4 = 0100, 5= 0101. So 4&5 = (0100 & 0101) = (0&0)(1&1)(0&0)(0&1) = 0100 = 4
    cout<<"4&5= "<< (4&5) <<endl;
    
    cout<<endl;
    
    // check the code below(MY DOUBT):
    int y=1;
        if(y & (y = 2)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    // Here based on precedence rules, () get 1st preference. So y=2 is assignment.
    // Since it is being assigned, the condition becomes- (2&1) (since y=2 now)
    // 2&1 = (0010)&(0001) = 0000 = 0- 
    cout<<"\n"<<endl;
    
    
    // // Bitwise OR operator- |
    cout<<"Bitwise OR operator- |"<<endl;
    cout<<"1|0="<< (1|0)<<" , 0|1="<<(0|1)<<", 0|0="<<(0|0)<<", 1|1="<<(1|1) <<endl;
    //  x|0 = X, x&1 = x, x|x = x
    cout<<"4|0= "<< (4|0) <<", 4|4= "<< (4|4) <<endl;
    // 4 = 0100, 5= 0101. So 4|5 = (0100 | 0101) = (0|0)(1|1)(0|0)(0|1) = 0101 = 5
    cout<<"4|5= "<< (4|5) <<endl;
    
    cout<<"\n"<<endl;
    
    
    // Bitwise NOT operator- ~
    cout<<"Bitwise NOT operator- ~"<<endl;
    cout<<"~0 = "<< (~0) << endl;
    // ~4 = ~(0100) = 1011 = 2^3 + 0 + 2^1 + 2^0 = 11 or -5
    cout<<"~4 = "<< (~4) <<endl;
    cout<<endl;
    // check the output(MY DOUBT):
     if(~0 == 1) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    // the above conditions line is equivalent to ~()
    
    
    
    return 0;
}
