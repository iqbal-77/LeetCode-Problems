#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> arr, int C, int N, int minDis){
    int cows = 1, lastPosition = arr[0];
    for(int i=1; i<N; i++){
        if(arr[i] - lastPosition >= minDis){
            lastPosition = arr[i];
            cows++;
        }
        if(C == cows) return true;
    }
    return false;
}

int minDistance(vector<int> arr, int C, int N){
    sort(arr.begin(), arr.end());
    int ans = 0;
    int st = 1, end = arr[N-1] - arr[0];
    while(st<=end){
        int minDis = st+(end-st)/2;

        if(isPossible(arr, C, N, minDis)){
            ans = minDis;
            st = minDis+1;
        }
        else{
            end = minDis-1;
        }
    }
    return ans;
}




int main(){
    vector<int> arr = {1,2,8,4,9};
    int C = 3, N = 5;
    cout << minDistance(arr, C, N) << endl;

    return 0;
}

























// bool isPossible(vector<int> stall, int cows, int mid){
//     int lastValue = stall[0];
//     int n = stall.size();
//     int C = 1;
//     for(int i=1; i<n; i++){
//         if((stall[i] - lastValue) >= mid){
//             C++;
//             lastValue = stall[i];
//         }
//         if(cows == C) return true;
//     }
    
//     return false;
// }


// int cowsStall(vector<int> stall, int cows){
//     sort(stall.begin(), stall.end());
//     int n = stall.size();
//     int st = 1 , end = stall[n-1] - stall[0];
//     int ans = 0;

//     while(st <= end){
//         int mid = st+(end-st)/2;
//         if(isPossible(stall, cows, mid)){
//             ans = mid;
//             st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> stall = {1, 2, 4, 8, 9};
//      int cows = 3;
//     cout << cowsStall(stall, cows) << endl;
    

//     return 0;
// }