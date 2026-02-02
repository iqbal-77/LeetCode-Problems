#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {7, 1, 7, 4, 8, 2};
    int firstValue = nums[0], maxDif = 0;
    
    for(int i=1; i<nums.size(); i++){
        int secValue = nums[i];
        if(secValue > firstValue){
            maxDif = max(maxDif, (secValue - firstValue));

        }
        firstValue = min(firstValue, secValue);
    }
        cout << maxDif;




        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] > nums[i]){
                    maxDif = max(maxDif, (nums[j] - nums[i]));
                }
               
            }
            
        }
        cout << maxDif;

    return 0;
}