#include "box.h"
#include <iostream>
using namespace std;

string Box::getBoxName() const {
    return boxName;
}
int Box::getAmount() const {
    return amount;
}
string Box::getContents() const {
    return contents;
}
void Box::setBoxName(const string& boxName) {
    this->boxName = boxName;
}
void Box::setAmount(int amount) {
    this->amount = amount;
    cout << "Адреса параметра amount: " << &amount << "\n";
    cout << "Адреса this->amount: " << &this->amount << "\n";
}
void Box::setContents(const string& contents) {
    this->contents = contents;
}
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