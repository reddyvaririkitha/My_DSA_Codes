#include <bits/stdc++.h>
using namespace std;
// This fucntion checks if the given number is a perfect power of 2 or not. (like, 2, 4, 8, 16,etc.)

/*****This is also code for unsetting the 1st set index of the number.  *****/

void checkIfPowerOf2(int n){
    if( n==1){
        cout<<"number is not a power of 2"<<endl;
    }
    else{
        int z = n & (n-1);
        if(z==0){
            cout<<"number is power of 2"<<endl;
        }else{
            cout<<"number is not a power of 2"<<endl;
        }
    }
}

int main(){
   int n;
   cin>>n;
   checkIfPowerOf2(n);
    return 0;
}
