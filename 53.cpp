#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> nums = {-1};
    
   int maxSum = nums[0] , currSum = 0;
         
         for(int val: nums){
            currSum += val;
            maxSum = max(currSum, maxSum); 
            if(currSum < 0){
                currSum = 0;
            }                   
         }
    // for(int i=0; i<nums.size(); i++){
    //     int currSum = 0;
    //     for(int j=i; j<nums.size(); j++){
    //         currSum += nums[j];
    //         maxSum = max(currSum, maxSum);
    //     }
        
    // }
     cout << maxSum << " " << endl;
      
         

         return 0;
        }