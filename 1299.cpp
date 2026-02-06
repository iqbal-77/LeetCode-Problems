#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {17, 18, 5, 4, 6, 1};
    int n = nums.size();
    int currAns = 0;
    
// Optimized approach;
     vector<int> ans(n, -1);
   
    for(int i=n-1; i>0; i--){
        
        currAns = max(currAns, nums[i]);
        ans[i-1] = currAns;
        
    }
    for(int val : ans){
        cout << val << endl;
    }
    
// Brtue Force Approach

    for(int i=0; i<n-1; i++){
        int currAns = 0;
        for(int j=i+1; j<n; j++){
            currAns = max(currAns, nums[j]); 
        }
        ans.push_back(currAns);
    }
    ans.push_back(-1);
    

    for(int val: ans){
        cout << val << endl;
    }
    return 0;
}