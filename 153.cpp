#include <iostream>
#include <vector> 
using namespace std;
int findMin(vector<int>& nums) {
       int n = nums.size() , st = 0, end = n-1;
       if(n == 1){
        return nums[0];
       }
       while(st <= end){
        int mid = st+(end-st)/2;
       
        if(mid == 0){
            if(nums[mid] < nums[mid+1]) return nums[mid];
            else st = mid+1;
        }
        else if(mid == n-1){
            if(nums[mid] < nums[mid-1]) return nums[mid];
            else end = mid-1;
        }
         if(nums[mid] < nums[mid+1] && nums[mid] < nums[mid-1]){
            return nums[mid];
        }
        else if(nums[mid] > nums[end]){
            st = mid+1;
        }
        else{
            end = mid;
        }
       } 
       return -1;
    }
int main(){
    vector<int> nums = {11, 13, 15, 17};
    cout << findMin(nums) << endl;
    return 0;
}