// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).
// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
// Input
// t – the number of test cases, then t test cases follows. 
// * Line 1: Two space-separated integers: N and C
// * Lines 2..N+1: Line i+1 contains an integer stall location, xi
// Output
// For each test case output one integer: the largest minimum distance.
// Sample Input :
// 1
// 5 3
// 1
// 2
// 8
// 4
// 9
// Sample Output:
// 3 
// Output details:
// FJ can put his 3 cows in the stalls at positions 1, 4 and 8, 
// resulting in a minimum distance of 3.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool checkPositionRight(int cows, ll positions[], int n, ll distance){
    
    int count = 1;
    ll last_position = positions[0];
    
    for(int i=0;i<n;i++){
        if(positions[i]-last_position >= distance){
         	last_position = positions[i];
        	count++;   
        }
        if(count ==cows){
        	return 1;
    	}
    }
    return 0;
}

int main() {

	// Write your code here
    int t,n,c,i;
    cin>>t;
    while(t--){
        cin>>n>>c;
        ll shops[n];
        for(i=0;i<n;i++){
            cin>>shops[i];
        }
        sort(shops,shops+n);
        ll start = 0;
        ll end = shops[n-1]-shops[0];
        ll ans =-1;
        while(start<=end){
            int mid   = start + (end-start)/2 ;
            if(checkPositionRight(c,shops,n,mid)){
                ans = mid;
                start = mid +1;
            }
            else{
                end = mid-1;
            }
        }
        cout<<ans<<endl;
    }
}

