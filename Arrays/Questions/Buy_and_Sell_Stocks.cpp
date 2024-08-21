#include <iostream>
#include <climits>

using namespace std;

void maxProfit(int* prices, int n) {
    int bestBuy[n];
    bestBuy[0] = prices[0]; // Initialize with the first price
    
    for (int i = 1; i < n; i++) {    // be careful and start with 1st index instead of 0th index 
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for (int i = 1; i < n; i++) { // Start from 1 as profit calculation makes sense from the second day
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    cout << "The maximum profit is: " << maxProfit << endl;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);
    return 0;
}
