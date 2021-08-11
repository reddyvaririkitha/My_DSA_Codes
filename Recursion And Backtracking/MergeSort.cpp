// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Constraints :
// 1 <= n <= 10^3
// Sample Input 1 :
// 6 
// 2 6 8 5 4 3
// Sample Output 1 :
// 2 3 4 5 6 8
// Sample Input 2 :
// 5
// 2 1 5 2 3
// Sample Output 2 :
// 1 2 2 3 5 

#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int i=low, j = mid, k=0;
    int temp[high-low+1];
    
    for(k=0; i<mid && j<=high; k++){
        if(arr[i]<=arr[j]){
            temp[k] = arr[i++];
        }else{
            temp[k] = arr[j++];
        }
    }
    while(i<mid){
        temp[k++] = arr[i++];
    }
    while(j<=high){
        temp[k++] = arr[j++];
    }
    for(i=low, k=0; i<=high;i++, k++){
        arr[i] = temp[k];
    }
}


void mymergesort(int arr[], int low, int high){
    if(high>low){
        int mid = (low + high)/2;
        mymergesort(arr, low, mid);
        mymergesort(arr, mid+1, high);
        merge(arr, low, mid+1, high );
    }
}

void mergeSort(int input[], int size){
	// Write your code here
    mymergesort(input, 0, size-1);  
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
