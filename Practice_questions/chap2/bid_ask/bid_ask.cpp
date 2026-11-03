// task get the bid and ask price of a stock and compute the spread
#include <iostream>

double mid(int bid, int ask) {
    return (ask + bid) / 2.0;
}

int spread(int bid, int ask) {
    return ask - bid;
}

double spreadBps(int bid, int ask) {
    return spread(bid, ask) * 10000 / mid(bid, ask);
}

int main() {
    int bid = 10001;
    int ask = 10004;

    int m = mid(bid, ask);
    std::cout << "The mid of the bid ask is: " << m << "\n";

    int s = spread(bid, ask);
    std::cout << "The spread of the bid ask is: " << s << "\n";

    int sb = spreadBps(bid, ask);
    std::cout << "The spread in BPS of the bid ask is: " << sb << "\n";
}