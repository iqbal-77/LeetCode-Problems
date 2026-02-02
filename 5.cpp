#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Input: x = 2.00000, n = 10
    
    long n = 10;
    double ans = 1;
    double x = 3.0000;

    if(n < 0){
        x = 1/x;
        n = -n;
    }
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;


    while(n > 0){
        if(n % 2 == 1){
            ans *= x;
        }
        x *= x;
        n /= 2;
    }
    cout << ans;
    return 0;
}