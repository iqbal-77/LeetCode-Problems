#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int mid){
    int students = 1, pages = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > mid) return false;
        
        else if(pages + arr[i] <= mid){
            pages+= arr[i];
        }
        else{
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}
int allocateBook(vector<int> &arr, int n, int m){
    if(m > n) return -1;

    int sum = 0;
    for(int i=0; i<n; i++){  // Range()
        sum += arr[i];
        
    }

    int st = 0, end = sum, ans = -1;
    while(st <= end){
        int mid = st+(end-st)/2;
        if(isValid(arr, n, m,  mid)){ // left
            ans = mid;
            // cout << "ans = " << ans << endl;
            end = mid-1;
        } 
        else{ // right
            st = mid+1;   
        }
    }
    return ans;

}


int main(){
    vector<int> arr = {15, 17, 20, 21};
    int n = 3, m = 2;
    cout << allocateBook(arr, n, m) << endl;
    


    return 0;
}