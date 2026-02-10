#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    vector<int> nums = {1, 3, 5, 6};
    int target = 4,     maxSum = INT_MIN;
    int st = 0, end = nums.size() -1, count = 0;
        while(st <= end){
            int mid = st+(end-st)/2;

            if(target == nums[mid]){
                count = mid;
                break;
            }
            else if(target < nums[mid]){
                end = mid-1;
                count = mid;
            }
            else if(target > nums[mid]){
                st = mid+1;
                count = mid+1;
            }
        }
        cout << count << endl;





















//     int n = nums.size(),count = 0, target = 4;

//     int st = 0, end = n-1;
    
//     while(st <= end){
//         int mid =st +(end-st)/2;
        
//         if(target == nums[mid]){
//             cout << mid << endl;
//             break;
//         }
//         else if(target > nums[mid]){
//             count = mid+1;
//             st = mid+1;
//         }
//         else if(target < nums[mid]){
//             end = mid-1;
//             // count =  mid;
//         }
//     }
//   cout << count << endl;









    // // brtue force
    // for(int i=0; i<n; i++){
    //     if(target > nums[i]){
    //         count++;
    //     }
    //     else if(target == nums[i]){
    //         count = i;
    //     }
    // }
    // cout<< count << endl;
    return 0;
}