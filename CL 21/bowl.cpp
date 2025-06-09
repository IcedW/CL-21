#include "bowl.h"
#include <iostream>
using namespace std;

string Bowl::getBowlName() const {
    return bowlName;
}
int Bowl::getAmount() const {
    return amount;
}
string Bowl::getContents() const {
    return contents;
}
void Bowl::setBowlName(const string& bowlName) {
    this->bowlName = bowlName;
}
void Bowl::setAmount(int amount) {
    this->amount = amount;
    cout << "Адреса параметра amount: " << &amount << "\n";
    cout << "Адреса this->amount: " << &this->amount << "\n";
}
void Bowl::setContents(const string& contents) {
    this->contents = contents;
}
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