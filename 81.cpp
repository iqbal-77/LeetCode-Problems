#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target){
    int st = 0, end = nums.size() - 1;

    while(st <= end){
        int mid = st+(end-st)/2;
        if(nums[mid] == target){
            return mid;
        }

        if(nums[st] <= nums[mid]){ // left half
                
        }

        else{  // right half

        }
    }
}

int main(){
    vector<int> nums = {1, 0, 1, 1, 1};
    int target = 0;
    return 0;
}