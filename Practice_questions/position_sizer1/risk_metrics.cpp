// this file consists of the risk metric portions of the positon_ize calculator

#include <iostream>

int riskBudget(int accountCents, int riskBps) {
    return accountCents / riskBps * 10000;
}

int riskPerShare(int entryCents, int stopCents) {
    return entryCents - stopCents;
}
