#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int val: nums){
            sum += val;
        }

        int ls = 0, ans = INT_MAX;
        int RA = 0, idx = 0;
        for(int i=0; i<n; i++){
            ls += nums[i];
            
            int rs = sum - ls;
            int LA = ls/(i+1);
            if(i == n-1){
                RA = 0;
            }
            else{
                RA = rs/(n-i-1);
            }
            
            int currAns = abs(LA - RA);
            
           if(currAns < ans){
                ans = currAns;
                idx = i;
           }

        }
        return idx;
    }



int main(){
    vector<int> nums = {2,5,3,9,5,3};
    cout << minimumAverageDifference(nums) << endl;


    // int n = nums.size();
    // vector<int> ans(n, 1);
    // for(int i=1; i<n; i++){
    //     ans[i] = nums[i-1] * ans[i-1];
    // }
   
    // int suffix = 1;
    // for(int i=n-2; i>=0; i--){
    //     suffix *= nums[i+1];
    //     ans[i] = suffix * ans[i];
    // }

    // for(int val: ans){
    //     cout << val << endl;
    // }


    // int ans = nums[n-1]+1;
    //    int size = 0;
    // int result = ans;
    // int currAns = ans;

    // while(result > 0){
    //     size++;
    //     result /= 10;
    // }
    // n = size;
    // nums.resize(n);
    // for(int i=n-1; i>=0; i--){
    //     currAns = ans % 10;
      
    //     nums[i] = currAns;
    //     ans /= 10;
        
    // }

    // for(int val: nums){
    //     cout << val << endl;
    // }
 
 
    
    
    

    
    return 0;
}
