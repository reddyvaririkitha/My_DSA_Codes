//find the maximum sum possible in a subarray in the given array

#include <bits/stdc++.h>

using namespace std;

int Kadanes_Algo(int arr[], int n){
    int temp_sum =0, max_sum = INT_MIN, start =0, end =0, s = 0;
    for(int i=0; i<n;i++){
        temp_sum += arr[i];
        if(temp_sum>max_sum){
            max_sum = temp_sum;
            start = s;
            end = i;
        }
        if(temp_sum<0){
            temp_sum = 0;
            s = i+1;
        }
    }
    cout<<"Start = "<<start<<", End = "<<end<<"\nElements are: ";
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    return max_sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Kadanes_Algo(arr,n)<<endl;
    return 0;
}
