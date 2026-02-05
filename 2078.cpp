#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> colors = {1,2,3,1,4};
    int n = colors.size();
    int maxDis = 0;




    int dis = 0;
    int maxDis = 0;
    int lastIdx = n- 1;
    int lp = 0, rp = n-1;
    while(lp < rp){
        if(colors[lp] != colors[rp]){
            dis = max((rp - lp), (lastIdx - rp));
            
            maxDis = max(maxDis, dis);
            
        }
        rp--;
    }
    
    cout << maxDis;



    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(colors[i] != colors[j]){
                maxDis = max(maxDis, (j - i));
            }
        }
    }
    
    return 0;
}