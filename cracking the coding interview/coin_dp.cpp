#include <iostream>
#include <vector>

int main() {
    long long N;
    std::cin >> N;

    std::vector<long long> coins; // Values of the coins
    long long coin = 1;
    while (coin <= N) {
        coins.push_back(coin);
        coin *= 2;
    }

    int numCoins = 0;
    for (int i = coins.size() - 1; i >= 0; i--) {
        while (N >= coins[i]) {
            N -= coins[i];
            numCoins++;
        }
    }

    std::cout << numCoins << std::endl;

    return 0;
}
