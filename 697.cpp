#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1, 2, 2, 3, 1};  // {1,2,2,3,1,4,2}

    int freq= 0, ans = 0;

    for(int i=0; i<nums.size(); i++){
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
    int degree = 0, idx = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == ans){
            degree++;
            idx = i;

        }   
    }
    cout << "degree = " << degree << endl;
   cout<< "index = " << idx << endl;
    cout << "ans = " << ans << endl;;
    return 0;

}