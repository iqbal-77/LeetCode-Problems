#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void bubbleSort(int arr[], int n){ // o(n^2)
//     for(int i=0; i<n-1; i++){ // 1*n
//         bool isSwap = false;

//         for(int j=0; j<n-i-1; j++){ //n*n
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap){ // array is already sorted.
//             return;
//         }
//     }
    
    
// }


void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallIdx = i;

        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallIdx]){
                smallIdx = j;
            }
        }
        swap(arr[i], arr[smallIdx]);
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

}

int main(){
    int n = 5;
    int arr[] ={4,1,5,2,3};
    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";

    }
    return 0;
}