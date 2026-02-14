#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int val: nums){
            totalSum += val;
        }
        int leftSum = 0, minValue = INT_MAX, aveDiff = 0, idx = 0;

        int firstValue = 0, secValue = 0;
        if(n == 1) return 0;

        for(int i=0; i<n; i++){
            leftSum += nums[i];
            long long rightSum = totalSum - leftSum;
            long long leftAvg = leftSum/(i+1);
            long long rightAvg = (i == n-1)? 0: rightSum/(n-i-1);

            aveDiff = abs(leftAvg - rightAvg);    
            if(aveDiff < minValue){
                minValue = aveDiff;
                idx = i;
            } 
        }
       
        return idx;
    }

int main(){
    vector<int> nums = {2,5,3,9,5,3};
    // cout << minimumAverageDifference(nums) << endl;


// // <<<<<< ===== OPTIMIZED APPROACH
 int idx = 0;
     int n = nums.size();
        int leftSum = 0, totalSum = 0;
         
        for(int val: nums){
            totalSum += val;
        }
        int currSum = 0;
        for(int i=0; i<n-1; i++){
            leftSum = currSum;
          
            int rightSum = totalSum - leftSum - nums[i];

            if(leftSum  == rightSum){
                idx = i;
                break;
            }
            currSum += nums[i];
            
        }
        cout << idx  << endl;
    
    // // <<<<<<====== BRUTE FORCE APPROACH =====>>>>>
    // int idx = 0;
    // vector<int> prefix(n, 0);
    // vector<int> suffix(n, 0);
    // for(int i=1; i<n; i++){
    //     prefix[i] = prefix[i-1] + nums[i-1];
    // }
    // for(int j=n-2; j>=0; j--){
    //     suffix[j] = suffix[j+1] + nums[j+1];
    // }
    // for(int i=0; i<n; i++){
    //     if(prefix[i] == suffix[i]){
    //         idx = i;
    //         break;
    //     }
    // }
    // cout << idx << endl;

        return 0;
    }