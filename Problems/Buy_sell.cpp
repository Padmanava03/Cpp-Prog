#include <iostream>
#include <cmath>
using namespace std;

int maxProfit(int prices[], int n);

int main(){
    int prices[6] = {7, 1, 5, 3, 6, 4};
    cout << "The maximum profit is: " << maxProfit(prices, 6) << endl;
    
    return 0;
}

int maxProfit(int prices[], int n){
    int mp = 0;
    int bestBuy = prices[0];

    for(int i=1; i<n; i++){
        if(prices[i] > bestBuy){
            mp = max(mp, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return mp;
}