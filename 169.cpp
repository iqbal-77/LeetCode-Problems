#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {3,3,4};
    int n = nums.size(), freq = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout << ans;

    
    



    
    for(int i=0; i<n; i++){
        int freq = 0;
        for(int j=0; j<n; j++){
            if(nums[i] == nums[j]){
                freq++;
                }
            }
        if(freq > (n/2)){
            cout << nums[i] <<endl;
            break;
        }
    }
   





  

    
    

    return 0;
}