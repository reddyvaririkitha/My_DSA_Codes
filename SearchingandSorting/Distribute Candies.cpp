// Shaky has N (1<=N<=50000) candy boxes each of them contains a non-zero number of candies (between 1 and 1000000000). Shaky want to distibute these candies among his K (1<=K<=1000000000) IIIT-Delhi students. He want to distibute them in a way such that:
// 1. All students get equal number of candies.
// 2. All the candies which a student get must be from a single box only.
// As he want to make all of them happy so he want to give as many candies as possible. Help Shaky in finding out what is the maximum number of candies which a student can get.
// Input
// First line contains 1<=T<=20 the number of test cases. Then T test cases follow. First line of each test case contains N and K. Next line contains N integers, ith of which is the number of candies in ith box.
// Output
// For each test case print the required answer in a seperate line.
// Sample Input:
// 2
// 3 2 
// 3 1 4
// 4 1
// 3 2 3 9
// Sample Output:
// 3
// 9

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll binarysearch(ll arr[], ll n, ll low, ll high, ll k){
    if(k == 1){
        return high;
    }
    ll ans = low;
    while(high>=low){
        ll mid = (high + low)/2;
        ll no_of_persons = 0;
        for(ll i=0;i<n;i++){
            if(mid!=0){
             	no_of_persons += arr[i]/mid ;   
            }
        }
        if(k <= no_of_persons){
            low = mid +1; 
            if(mid>ans){
                ans = mid;
            }
        } else{
            high = mid-1;
        }
    }
     return ans;
}

// #include<iostream>
// #include<algorithm>
// //#include<bits/stdc++.h>
// long long int arr[1000000];
// using namespace std;
// int main(){
//   	long long int t;
//   	cin>>t;
//     while(t--){
// 		long long int n,k;
//      	cin>>n>>k;
//     	for(long long int i=0;i<n;i++){
// 			cin>>arr[i];   
//         }
//     	sort(arr,arr+n);
//       	long long int lo=arr[n-1]/k;
//       	long long int ans=lo;
//     	long long int hi = arr[n-1];
//       	if(lo==0 && hi==1){
//         	cout<<"1"<<endl;
//         	continue;
//        	}
//      // cout<<"initial lo "<<lo<<"  hi  "<<hi<<endl;
//     	while(lo<=hi){
//         	long long int mid=(lo+hi)/2;
//       //    cout<<"mid "<<mid<<endl;
//           	long long int stud_covered=0;
//            	for(long long int i=0;i<n;i++){
//             	if(mid!=0){
//                  	stud_covered+=arr[i]/mid;   
//                 }
//             }
//             if(stud_covered>=k){
//               	lo=mid+1;
//               	if(mid>ans){
//                 	ans=mid;  
//                 }
//              }else{
//               	hi=mid-1;
//              }
//        	}
//   		cout<<ans<<endl;   
//    }
  
//    return 0;
//  }


int main() {

	// Write your code here
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i =0; i<n;i++){
            cin>> arr[i];
        }
        sort(arr, arr+n);
        ll low =0;
        ll high = arr[n-1];
        if(low ==0 && high==1){
            cout<<"1"<<endl;
            continue;
        }
        ll ans = binarysearch(arr,n, low, high,k);
        cout<<ans<<endl;
    }
}
