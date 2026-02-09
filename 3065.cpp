#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    vector<int> nums = {2,11,10,1,3};
    int count = 0, k = 10;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] < k){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}