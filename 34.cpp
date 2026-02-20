#include <iostream>
#include <vector>
using namespace std;

 vector<int> searchRange(vector<int>& nums, int target){
    int n = nums.size();
    int st = 0, end = n-1;
    int ans1 = n;
    while(st <= end){
        int mid = st+(end-st)/2;

        if(nums[mid] == target){
            ans1 = mid;
            end = mid-1;
        }
        else if(target > nums[mid]){
            st =  mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if(ans1 == n) return {-1, -1};

    int low = 0, high = n-1;
    int ans2 = n;
    while(low <= high){
        int mid = low+(high-low)/2;

        if(nums[mid] == target){
            ans2 = mid;
            st = mid+1;
        }
        else if(target > nums[mid]){
            st = mid+1;

        }
        else{
            end = mid-1;
        }
    }
    if(ans2 == n) return {ans1, -1};
    else{
        return {ans1, ans2};
    }


 }

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8; 

    searchRange(nums, target);
   
    return 0;
}