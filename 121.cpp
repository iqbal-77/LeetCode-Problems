 #include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> stocks = {7, 1, 5, 3, 6, 4};
    int n = stocks.size();
    int maxProfit = 0;
    int bestBuy = stocks[0];
    

    for(int i=1; i<n; i++){
        if(stocks[i] > bestBuy){
            maxProfit = max(maxProfit, (stocks[i] - bestBuy));
        }
        bestBuy = min(bestBuy, stocks[i]);
    }
    cout << maxProfit;

    return 0;
}