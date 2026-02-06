#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> answer(n, 1);
    
    
    
    for(int i=0; i<n-1; i++){
        answer[i+1] = answer[i] * nums[i];
        
    }
    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        answer[i] *= suffix;
    }
    
    for(int val: answer){
        cout << val << endl;
    }
 

    
    // int n = nums.size();
    // vector<int> ans(n, 1);

    // for(int i=1; i<n; i++){
    //     ans[i] = ans[i-1] * nums[i-1];
    // }

    // int suffix = 1;
    // for(int i=n-2; i>=0; i--){
    //     suffix *= nums[i+1];
    //     ans[i] *= suffix;
    // }
    // for(int val: ans){
    //     cout << val << " ";
    // }















    // vector<int> prefix(n, 1);
    // vector<int> suffix(n, 1);
    // // prefix
    // for(int i=1; i<n; i++){
    //     prefix[i] = prefix[i-1] * nums[i-1];
    // }
    // // suffix
    // for(int i=n-2; i>=0; i--){
    //     suffix[i] = suffix[i+1] * nums[i+1];
    // }
    // // answer
    // for(int i=0; i<n; i++){
    //     answer[i] = prefix[i] * suffix[i];
    // }

    // for(int val: answer){
    //     cout << val << endl;
    // }
    







    // vector<int> nums = {1, 2, 3, 4};
    // vector<int> answer;
    
    // for(int i=0; i<nums.size(); i++){
    //     int ans = 1;
    //     for(int j=0; j<nums.size(); j++){
    //         if(i != j){
    //             ans *= nums[j];
                
    //         }
    //     }
    //     answer.push_back(ans);
    // }
    // for(int val: answer){
    //     cout << val << " ";
    // }
    return 0;
}