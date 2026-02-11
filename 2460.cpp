#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();
     int i = 0, k = n-1;
        for(int j=0; j<n; j++){
            if(nums[j] != 0){
                nums[i] = nums[j];
                i++;
            }
        }
        while(i < n){
            nums[i] = 0;
            i++;
        }
                
        for(int val: nums){
            cout << val << " ";
        }









    // int i = 0, j = 1, k = 0;
    // vector<int> ans(n, 0);
    // while(j < n){
    //     if(nums[i] == nums[j]){
    //         nums[i] = nums[i] * 2;
    //         nums[j] = nums[i] * 0 ;
              
    //     }
    //     j++;
    //     i++;
    // }
    // for(int i=0; i<n; i++){
    //     if(nums[i] != 0){
    //         ans[k] = nums[i];
    //         k++;
    //     }
        
    // }
    // for(int val: ans){
    //     cout << val << " ";
    // }
    


    return 0;
    }