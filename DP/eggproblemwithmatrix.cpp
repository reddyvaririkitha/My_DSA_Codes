// https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/

#include <bits/stdc++.h>

using namespace std;

// This is a dp problem where we are using a matrix. The matrix dimensions are number of changing variables. 
// Here the changing variables in the recursion code were only e and f. So the dimesniosn of the matrix is e*f.
// Since we don't know the don't know e and f before, we are defining the matrix with the conditions given for e and f.(from gfg question for this problem)


int eggs(int e, int f, int t[][]){
    // base case
    if(f==1 || f==0){
        return f; //if floors are 0 or 1, then min is that number of floors
    }
    if(e==1){
        return f; //only 1 egg- so all floors should be writtened
    }
    if(t[e][f] !=-1){
        return t[e][f];
    }
    int mn = INT_MAX;
    
    for(int k=1;k<=f;k++){
        int temp = 1 + max(eggs(e-1,k-1,t), eggs(e,f-k,t)); //since this is a worst case answer, we took max.
        mn = min(mn,temp); //since it was asked min no. of attempts, we are using min.
    }
    t[e][f] = mn;
    return t[e][f];
}

int main(){
    int e,f;
    cin>>e>>f;
  cout<<"don't know why this codie is giving error. please chek this after sometime."<<endl;
    int t[e+1][f+1] = {-1};
    cout<<eggs(e,f,t);
    return 0;
}
