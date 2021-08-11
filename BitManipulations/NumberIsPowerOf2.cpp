#include <bits/stdc++.h>
using namespace std;
// This fucntion checks if the given number is a perfect power of 2 or not. (like, 2, 4, 8, 16,etc.)
void checkIfPowerOf2(int n){
    int z = n & (n-1);
    if(z==0){
        cout<<"number is power of 2"<<endl;
    }else{
        cout<<"number is not a power of 2"<<endl;
    }
}

int main(){
   int n;
   cin>>n;
   checkIfPowerOf2(n);
    return 0;
}
