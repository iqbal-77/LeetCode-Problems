#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target){
    int st = 0, end = nums.size() - 1;

    while(st <= end){
        int mid = st+(end-st)/2;
        if(nums[mid] == target){
            return true;
        }
        if(nums[st] == nums[mid]){
            st++;
        }
        if(nums[end] == nums[mid]){
            end--;
        }

        else if(nums[st] <= nums[mid]){ // left half
            if(nums[st] <= target && target <= nums[mid]){
                end = mid-1;
            }
            else {
                st = mid+1;
            } 
        }

        else{  // right half
            if(nums[mid] <= target && target <= nums[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums = {3, 1};
    int target = 1;
    cout << binarySearch(nums, target) << endl;
    return 0;
}