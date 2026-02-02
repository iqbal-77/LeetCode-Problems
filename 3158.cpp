#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    
    vector<int> nums = {7, 8, 9, 13, 12, 7, 8, 9};
    vector<int> pair;
    int n = nums.size();
    //sort
    sort(nums.begin(), nums.end());
    int ans = nums[0];
   for(int i=1; i<n; i++){
    if(ans == nums[i]){
        pair.push_back(ans);
    }
    else{
        ans = nums[i];
    }
   }
   int result = 0;
   int m = pair.size();
   if(m < 1){
    return 0;
   }
   else if(m < 2){
    return pair[0];
   }
   else{
    for(int val: pair){
        result ^= val;
    }
   }
   cout << result << endl;

    // for(int i=0; i<n; i++){
    //     int ans = 0;
    //     for(int j=i+1; j<n; j++){
    //         if((nums[i] ^ nums[j]) == 0){
    //             ans = nums[i];
    //             pair.push_back(nums[i]);
    //             break;
    //         }
    //     }  
    // }

    // // cout << pair[0] << pair[1] << endl;
    // int result = 0;
    //  int m = pair.size();
    // if(m < 1){
    //     return 0;
    // }
    // else if(m < 2){
    //     return pair[0];
    // }
    // else{
    //     for(int val: pair){
    //         result ^= val;
    //     }
       
    //  cout << result << endl;
    // }
    
    return 0;
}