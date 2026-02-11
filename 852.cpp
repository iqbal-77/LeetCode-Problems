#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {3, 5, 3, 2, 0};
    int st = 1, end = nums.size()-2;
    










    while(st <= end){
        int mid = st +(end - st)/2; 
        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            cout << mid << endl;
          break;
        }

        else if(nums[mid] < nums[mid+1]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
        
    }
    return 0;
}