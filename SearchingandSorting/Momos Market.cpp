// Shreya loves to eat momos. Her mother gives her money to buy vegetables but she manages to save some money out of it daily. After buying vegetables, she goes to "Momos Market", where there are ‘n’ number of shops of momos. Each of the shops of momos has a rate per momo. She visits the market and starts buying momos (one from each shop) starting from the first shop. She will visit the market for ‘q’ days. You have to tell that how many momos she can buy each day if she starts buying from the first shop daily. She cannot use the remaining money of one day on some other day. But she will save them for other expenses in the future, so, you also need to tell the sum of money left with her at the end of each day.
// Input Format:
// First line will have an integer ‘n’ denoting the number of shops in market.
// Next line will have ‘n’ numbers denoting the price of one momo of each shop.
// Next line will have an integer ‘q’ denoting the number of days she will visit the market.
// Next ‘q’ lines will have one integer ‘X’ denoting the money she saved after buying vegetables.
// Constraints:
// 1 <= n <= 10^5
// 1 <= q <= 10^5
// 1 <= X <= 10^9
// Output:
// There will be ‘q’ lines of output each having two space separated integers denoting number of momos she can buy and amount of money she saved each day.
// Sample Input:
// 4
// 2 1 6 3
// 1
// 11
// Sample Output:
// 3 2
// Explanation:
// Shreya visits the "Momos Market" for only one day. She has 11 INR to spend. She can buy 3 momos, each from the first 3 shops. She would 9 INR (2 + 1 + 6) for the same and hence, she will save 2 INR.


#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int binarysearch(ll arr[], int low, int high, ll *k){
    if(*k > arr[high]){
        *k -= arr[high];
        return high;
    }
    while(high>=low){
        int mid = (high + low)/2;
        if(arr[mid]== *k){
            *k = 0;
            return mid;
        }
        else if(mid>0 && arr[mid-1]< *k && arr[mid]> *k){
            *k -= arr[mid-1];
            return mid-1;
        }
        else if(arr[mid] > *k){
            high = mid-1;
        }
        else if(arr[mid] < *k){
            low = mid+1;
        }
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    ll momo_rate[n];
    for(int i=0;i<n;i++){
        cin>>momo_rate[i];
    }
    ll prefix_sum[n];
    prefix_sum[0] = momo_rate[0];
    for(int i=1; i<n;i++){
        prefix_sum[i] = prefix_sum[i-1] + momo_rate[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<prefix_sum[i]<<", ";
    // }
    int q;
    cin>>q;
    ll m;
    for(int i =0; i<q;i++){
        cin>>m;
        ll *money = &m;
        int shop_count = binarysearch(prefix_sum,0,n-1,money);
        cout<<shop_count+1<<" "<<*money<<endl;
    }
    
	return 0;
}

