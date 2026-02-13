#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,3,3};
    int n = nums.size();
    if(n == 1){
        cout << nums[0] << endl;
        
    }
    int st = 0, end = n-1;

    while(st <= end){ 
        
        int mid = st+(end-st)/2;
    
        if(mid == 0 && nums[mid] != nums[mid+1] || mid == n-1 && nums[mid] != nums[mid-2]){
            cout << nums[mid] << endl;
            break;
        }
        
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            cout << nums[mid] << endl;
            break;
        }
        else if(mid%2 == 0){ // even
            if(nums[mid] == nums[mid-1]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{ // odd
            if(nums[mid] == nums[mid-1]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    
    return 0;
}



