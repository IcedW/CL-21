#include "bowl.h"
#include <iostream>
using namespace std;

void Bowl::take() {
    cout << "Taking contents out of " << bowlName << "\n";
    amount--;
}
void Bowl::input() {
    cout << "Refilling the " << bowlName << "\n";
    amount++;
}
void Bowl::checkAmount() {
    cout << bowlName << " has " << amount << " of " << contents << "\n";
}