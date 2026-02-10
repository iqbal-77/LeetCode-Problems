#include <iostream>
#include <vector> 
using namespace std;

int countHillValley(vector<int>& nums) {
        int hill = 0, n = nums.size(), j = 0;
        for(int i=1; i<n-1; i++){
           if(nums[i] > nums[j] && nums[i] > nums[i+1]){
            hill++;
            j = i;
           }
           else if(nums[i] < nums[j] && nums[i] < nums[i+1]){
            hill++;
            j=i;
           }
        }
        return hill;
    }
int main(){
    vector<int> nums = {8,2,5,7,7,2,10,3,6,2};
    cout << countHillValley(nums) << endl;
    return 0;
}