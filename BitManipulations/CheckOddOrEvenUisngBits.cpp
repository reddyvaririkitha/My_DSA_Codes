#include <bits/stdc++.h>
using namespace std;

void checkithebit(int n){
  //on applying & operator, if the 0th index is set or unset would be known. If it is set, then the 0th index would be 1 which is an odd number else even number.  
  int z = n & 1 ; // n & (1<<0) = n & (1)
    if(z==1){
        cout<<"The given number is odd"<<endl;
    }else{
        cout<<"The given number is even"<<endl;
    }
}

int main(){
   int n;
   cin>>n;
   checkithebit(n);
    return 0;
}
