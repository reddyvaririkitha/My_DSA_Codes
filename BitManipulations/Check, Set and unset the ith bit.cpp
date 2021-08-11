#include <bits/stdc++.h>
using namespace std;

void turnOffIthBit(int n, int i){
    cout<<"after turning off the bit, ans = "<< (n&~(1<<i)) <<endl;
}


void turnOnIthBit(int n, int i){
    int ans = (n | (1<<i));
    cout <<"after turning on the bit, ans = "<<ans<<endl;
}

void checkithebit(int n, int i){
    int z = n & (1<<i) ;
    if(z==0){
        cout<<"ith ie, bit of index "<<i<<" is set."<<endl;
    }else{
        cout<<"ith ie, bit of index "<<i<<" is not set."<<endl;
    }
}

int main(){
   cout<<"1.Check if ith bit is set or not."<<endl;
   cout<<"2.Set the ith bit of the number."<<endl;
   cout<<"3.Unset the ith bit of the number."<<endl;
   cout<<"Enter the number and the ith bit: ";
   int n,i,option;
   cin>>n>>i;
   cout<<"Select the option-1,2,3: ";
   cin>>option;
   switch(option){
    case 1:
        checkithebit(n,i);
        break;
    case 2:
        turnOnIthBit(n,i);
        break;
    case 3:
        turnOffIthBit(n,i);
        break;
   }
   
    
    return 0;
}
