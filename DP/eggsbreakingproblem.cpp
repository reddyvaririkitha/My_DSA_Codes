#include <bits/stdc++.h>

using namespace std;

int eggs(int e, int f){
    // base case
    if(f==1 || f==0){
        return f; //if floors are 0 or 1, then min is that number of floors
    }
    if(e==1){
        return f; //only 1 egg- so all floors should be writtened
    }
    int mn = INT_MAX;
    
    for(k=1;k<=f;k++){
        int temp = 1 + max(eggs(e-1,k-1), eggs(e,f-k)); //since this is a worst case answer, we took max.
        mn = min(mn,temp); //since it was asked min no. of attempts, we are using min.
    }
    return mn;
}

int main(){
    int e,f;
    cin>>e>>f;
    cout<<eggs(e,f);
    return 0;
}
