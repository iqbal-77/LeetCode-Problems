#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int maxWater = 0;
    int st = 0, end = height.size() - 1;
    while(st < end){
        int width = end - st;
        int minHeight = min(height[st], height[end]);
        int currWater = width * minHeight;
        maxWater = max(maxWater, currWater);
        if(height[st] < height[end]){
            st++;
        }
        else{
            end--;
        }
    }
    cout << maxWater;







    // vector<int> height = {1,8,6,2,5,4,8,3,7};
    // int maxHeight = 0;
    // int maxWater = 0;
    // int j = 1;

    // for(int i=0; i<height.size(); i++){
       
    //         int width = j - i;
    //         maxHeight = min(height[i], height[j]);
    //         int area = maxHeight * width;
    //         maxWater = max(area, maxWater);
    //         j++;
           
        
        
    // }
    // cout << maxWater << endl;
        
    return 0;
}