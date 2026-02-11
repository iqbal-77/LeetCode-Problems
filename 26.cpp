#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
       int i = 0;
       if(n == 1){
        nums[i] = nums[n-1];
        i++;
       }
       
       for(int j=1; j<n; j++){
        if(nums[j-1] != nums[j]){
            nums[i] = nums[j-1];
            i++;
        }  
        if(j == n-1){
            nums[i] = nums[j];
            i++;
        } 

       }
       return i;
    }
};

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    // removeDuplicates(nums);
   
    return 0;
}
