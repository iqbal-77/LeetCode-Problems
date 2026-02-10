#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){

    // optimized form
    vector<int> nums = {1,2,3};
    int n = nums.size();
    //sort
    sort(nums.begin(), nums.end());
    int ans = 0;
    
    for(int i=1; i<n-1; i++){
        if(nums[i] == nums[i+1]){
            
            ans ^= nums[i];
        }
        
    }
    cout << ans << endl;















//     int ans = nums[0];
//    for(int i=1; i<n; i++){
//     if(ans == nums[i]){
//         pair.push_back(ans);
//     }
//     else{
//         ans = nums[i];
//     }
//    }
//    int result = 0;
//    int m = pair.size();
//    if(m < 1){
//     return 0;
//    } 
//    else{
//     for(int val: pair){
//         result ^= val;
//     }
//    }
//    cout << result << endl;

// // brute force
//     int n = nums.size();
//         int ans = 0, j= 1;
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//             if(i != j && nums[i] == nums[j]){
//                 ans ^= nums[i];
//               break;
//             }
//             }
//             }
        
//         return ans;


// brute force

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
  
    // else{
    //     for(int val: pair){
    //         result ^= val;
    //     }
       
    //  cout << result << endl;
    // }
    
    return 0;
}