#include "cup.h"
#include <iostream>
#include <cstring>
using namespace std;

Cup::Cup() : Cup("", 1, "", 0, 0) {}

Cup::Cup(const string& name, int amount, const string& contents, unsigned int size, int initVal)
    : cupName(name), amount(amount), contents(contents), arrSize(size) {
    if (size > 0) {
        arr = new int[size];
        for (unsigned i = 0; i < size; ++i)
            arr[i] = initVal;
    }
    else {
        arr = nullptr;
    }
}

Cup::~Cup() {
    delete[] arr;
}

string Cup::getCupName() const { return cupName; }
int Cup::getAmount() const { return amount; }
string Cup::getContents() const { return contents; }
int* Cup::getArr() const { return arr; }
unsigned int Cup::getArrSize() const { return arrSize; }

void Cup::setCupName(const string& name) { this->cupName = name; }
void Cup::setAmount(int amount) { this->amount = amount; }
void Cup::setContents(const string& contents) { this->contents = contents; }
void Cup::setArr(const int* newArr, unsigned int size) {
    delete[] arr;
    arrSize = size;
    if (size > 0) {
        arr = new int[size];
        memcpy(arr, newArr, size * sizeof(int));
    }
    else {
        arr = nullptr;
    }
}

void Cup::drink() { cout << "Drinking from " << cupName << "\n"; --amount; }
void Cup::refill() { cout << "Refilling the " << cupName << "\n"; ++amount; }
void Cup::checkAmount() { cout << cupName << " has " << amount << " of " << contents << "\n"; }