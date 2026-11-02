#include <iostream>
// this file will compute PnL

// Question Specs
/*
Input: buy price in cents, sell price in cents, number of shares.


Test: 10000 11000 50 → P&L: 50000 cents

then print in dollars
Once you learn if statements in chapter 4, come back and fix it. 

My thoughts:

1) needs to take these variables and compute buyValue, sellValue and PnL is the subtraction of them
2) return as an int
3) second function that takes cents to dollar convertor (return float)
4) call within main
*/

int pnl(int buyPrice, int sellPrice, int shares) {

    std::cout << "Calculating PnL with buy price " << buyPrice << " sell price " << sellPrice << " and shares bought " << shares << "\n";

    int buyValue = buyPrice * shares;
    int sellValue = sellPrice * shares;
// could simplify to (sellPrice - buyPrice) * shares 
    int pnl = sellValue - buyValue;

    return pnl;
}

double centsToDollars (int pnl) { // better to use double as it allows for decimal points and is more accurate than floar
    std::cout << "Converting PnL from cents to dollars";

    return pnl / 100.0; // ensure this is a .0 at the end or else computation is incorrect
}


int main() {
    std::cout << "Enter the number of shares bought: \n";
    int shares {};
    std::cin >> shares;

    std::cout << "Enter the price you bought at: \n";
    int buyPrice {};
    std::cin >> buyPrice;

    std::cout << "Enter the price you sold at: \n";
    int sellPrice {};
    std::cin >> sellPrice;

    int pnlCompute = pnl(buyPrice, sellPrice, shares);
    double pnlDollars = centsToDollars(pnlCompute);

    std::cout << "The PnL computed in cents is " << pnlCompute << " and in dollars it is $" << pnlDollars << "\n";

    return 0;




}