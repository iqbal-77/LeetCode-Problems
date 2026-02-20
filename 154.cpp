#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {2,2,2,0,1};
    int n = nums.size();
    int st = 0, end = n-1;
    while(st <= end){
        int mid = st+(end-st)/2;
        if(nums[mid] > nums[end]){
            st = mid+1;
        }
        else if(nums[mid] < nums[end]){
            end = mid;
        }
        else{
            end--;
        }
    }
    cout << nums[st]<< endl;

    
  // // <<<<<-----BRTUTE FORCE APPROACH -------->>>>>>
    // int ans = 0;
    // while(st <= end){
    //     int mid = st+(end-st)/2;
       
    //     if(st== mid && mid = end){ cout << nums[mid] << endl;}
        
    //     if(mid != st && nums[mid] == nums[st]){
    //         st++;
    //     }
    //     else if(end != mid && nums[mid] == nums[end]){
    //         end--;
    //     }
    //     else if(nums[mid] > nums[end]){
    //         st = mid+1;
          
    //     }
    //     else{
    //         end = mid;

    //     }
      
    // }
    

    
    return 0;
}