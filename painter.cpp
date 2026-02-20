#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> nums, int m, int N, int mid){
    int n = nums.size();
    int painter = 1, sum = 0;

    for(int i=0; i<n; i++){
    if(nums[i] > mid) return false;
    else if(sum + nums[i] <= mid){
        sum += nums[i];
    }
    else{
        painter++;
        sum = nums[i];
    }
    }
    return painter> m ? false: true;
}

int calTime(vector<int> nums, int m, int N){
    int n = nums.size();
    int totalSum = 0, count = 0, ans = 0;
    int st = INT_MIN;

    for(int val: nums){
        totalSum += val;
        st = max(st, val);
    }

    int end = totalSum;
    while(st <= end){
        int mid = st+(end-st)/2;

        if(isValid(nums, m, N, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {10, 10, 10, 10};
    int m = 2, N = 4;
    cout << calTime(nums, m, N) << endl;



    return 0;
}