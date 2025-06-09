#include "cup.h"
#include <iostream>
using namespace std;

string Cup::getCupName() const {
    return cupName;
}
int Cup::getAmount() const {
    return amount;
}
string Cup::getContents() const {
    return contents;
}
void Cup::setCupName(const string& cupName) {
    this->cupName = cupName;
}
void Cup::setAmount(int amount) {
    this->amount = amount;
    cout << "Адреса параметра amount: " << &amount << "\n";
    cout << "Адреса this->amount: " << &this->amount << "\n";
}
void Cup::setContents(const string& contents) {
    this->contents = contents;
}
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