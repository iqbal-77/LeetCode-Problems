#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {11,6,14,4};

    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]);
    

    int n = nums.size();
    for(int i=2; i<n; i++){
    int n1 = arr1.size();
    int n2 = arr2.size();
    if(arr1[n1-1] > arr2[n2-1]){

        arr1.push_back(nums[i]);
    }
    else{
        arr2.push_back(nums[i]);
    }
    }
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());



    for(int val: arr1){
        cout << val << " "; 
    }
    // for(int val: arr2){
    //     cout << val << " "; 
    // }
    cout << endl;
    return 0;
}