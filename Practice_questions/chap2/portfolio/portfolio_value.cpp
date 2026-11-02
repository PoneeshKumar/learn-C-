// task is to take all the values and positions of a persons porrtfolio and compute the total value
#include <iostream>

int positionValue(int shares, int priceCents) {
    return shares * priceCents;
}

int main() {
    int total {};

    std::cout << "Enter number of shares for the first stock: \n";
    int s1 {};
    std::cin >> s1;

    std::cout << "Enter the price in cents for the first stock: \n";
    int p1 {};
    std::cin >> p1;


   std::cout << "Enter number of shares for the second stock: \n";
    int s2 {};
    std::cin >> s2;

    std::cout << "Enter the price in cents for the second stock: \n";
    int p2 {};
    std::cin >> p2;

    std::cout << "Enter number of shares for the third stock: \n";
    int s3 {};
    std::cin >> s3;

    std::cout << "Enter the price in cents for the third stock: \n";
    int p3 {};
    std::cin >> p3;

    total += positionValue(s1, p1) + positionValue(s2, p2) + positionValue(s3, p3);

    std::cout << "The total portfolio value in cents is: " << total << "\n";

    return 0;


}