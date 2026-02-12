#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
        int st = 0, end = nums.size()-1, n = nums.size();
    if(n == 1){
        return 0;
    }
    if(n == 2){
        if(nums[n-2] > nums[n-1]){
            return 0;
        }
        else{
            return 1;
        }
    }
    while(st <= end){
        int mid = st+(end-st)/2;  
        if(mid == 0){
            if(nums[mid] > nums[mid+1]){
                return mid;
            }
            else{
                st = mid+1;
            }
        }
        else if(mid == n-1){
            if(nums[mid] > nums[mid-1]){
                return mid;
            }
        }
        else if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }
        else if(nums[mid] > nums[mid-1]){
                st= mid +1;
            }
        else{
                end = mid-1;
            }
        }
        
        return -1;
    }

int main(){
    vector<int> nums = {1,2,1,3,2};
    cout << findPeakElement(nums) << endl;

   
     
    return 0;
}

//   int st = 0, end = nums.size()-1, n = nums.size();
//     if(n == 1){
//         return 0;
//     }
//     while(st <= end){
//             int mid = st+(end-st)/2;
//              if(mid == 0){
//                 if(nums[mid] > nums[mid+1]){
//                     return mid;
//                 }
//                 else{
//                     st = mid+1;
//                 }
//              }
//             else if(mid == n-1){
//                 if(nums[mid] > nums[mid-1]){
//                     return mid;
//                 }
//                 else{
//                     end = mid-1;
//                 }
//              }
//             else if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
//                 return mid;
//             }
//             else if(nums[mid] > nums[mid-1]){
//                 st= mid +1;
//             }
//             else{
//                 end = mid-1;
//             }
//         }  
//     return -1;