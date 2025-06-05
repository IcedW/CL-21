#include "Cup.h"
#include <iostream>
using namespace std;

void Cup::drink() {
    cout << "Drinking from " << cupName << "\n";
    amount--;
}
void Cup::refill() {
    cout << "Refilling the " << cupName << "\n";
    amount++;
}
void Cup::checkAmount() {
    cout << cupName << " has " << amount << " of " << contents << "\n";
}