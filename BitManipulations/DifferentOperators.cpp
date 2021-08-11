#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    // Shift operators- can be used instead of pow function with base 2.
    // pow function which takes log(i) time complexity but this takes log(1) complexity
    cout<<"left shift: "<< (n<<1) <<endl; //left shift operator n<<i which gives n*(2^i)
    cout<<"right shift: "<< (n>>1) <<endl; //right shift operator n>>i which gives n/(2^i)
    
    // Bitwise AND operator- &
    cout<<"Bitwise AND operator- &"<<endl;
    cout<<"1&0="<< (1&0)<<" , 0&1="<<(0&1)<<", 0&0="<<(0&0)<<", 1&1="<<(1&1) <<endl;
    //  x&0 = 0, x&x = x
    cout<<"4&0= "<< (4&0) <<", 4&4= "<< (4&4) <<endl;
    // 4 = 0100, 5= 0101. So 4&5 = (0100 & 0101) = (0&0)(1&1)(0&0)(0&1) = 0100 = 4
    cout<<"4&5= "<< (4&5) <<endl;
    
    cout<<endl;
    
    // // Bitwise OR operator- |
    cout<<"Bitwise OR operator- |"<<endl;
    cout<<"1|0="<< (1|0)<<" , 0|1="<<(0|1)<<", 0|0="<<(0|0)<<", 1|1="<<(1|1) <<endl;
    //  x|0 = X, x|x = x
    cout<<"4|0= "<< (4|0) <<", 4|4= "<< (4|4) <<endl;
    // 4 = 0100, 5= 0101. So 4|5 = (0100 | 0101) = (0|0)(1|1)(0|0)(0|1) = 0101 = 5
    cout<<"4|5= "<< (4|5) <<endl;
    
    cout<<endl;
    
    return 0;
}
