#include "Box.h"
#include <iostream>
using namespace std;

void Box::takeOut() {
    cout << "Taking item out of " << boxName << "\n";
    amount--;
}
void Box::putIn() {
    cout << "Putting item into " << boxName << "\n";
    amount++;
}
void Box::checkAmount() {
    cout << boxName << " contains " << amount << " of " << contents << "\n";
}