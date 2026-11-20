// this is the main file for the position sizer

#include <iostream>
/*
the inputs taken are
1) account size
2) risk percentage
3) entry price
4) stop loss

The ouputs are:
1) how many shares
2) the risk you're willing to take
3) what the position costs
4) most you can lose
5) when to take profit
*/


int sharesToBuy(int budget, int perShare) {
    return budget / perShare;
}

int positionCost(int shares, int perShare) {
    return shares * perShare;
}

int targetPrice(int entryCents, int perShare) {
    return entryCents + 2*perShare;
}

int profitAtTarget(int shares, int perShare) {
    return shares * 2 * perShare;
}

int main() {
    std::cout << "Enter the account size: \n";
    int accountSize = {};
    std::cin >> accountSize;

    std::cout << "Enter the risk percentage you're comfortable with: \n";
    int riskPercentage = {};
    std::cin >> riskPercentage;

    std::cout << "Enter the entry price of the "
}