// Sort an array A using Quick Sort.
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
// 1 5 2 7 3
// Sample Output 2 :
// 1 2 3 5 7 

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int count=0, i, pivot=arr[low];
    for(i=low+1; i<=high; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    swap(arr[count+low], arr[low]);
    i= low; 
    int j = high;
    pivot = count+low;
    while((i<=pivot)&&(j>=pivot)){
        while(arr[i]<= arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }
        if((i<=pivot)&&(j>=pivot)){
         	swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    // for(i=low;i<=high;i++){
    //     cout<<"arr["<<i<<"]= "<<arr[i]<<", ";
    // }
    // cout<<"and pivot = "<<pivot<<endl;
    return pivot;
}


void myquicksort(int input[], int low, int high){
    if(low<= high){
     	int c = partition(input,low,high);
        myquicksort(input, low, c-1);
        myquicksort(input, c+1, high);
		}   
    }

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    myquicksort(input, 0, size-1);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


