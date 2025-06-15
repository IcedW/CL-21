#include "bowl.h"
#include <iostream>
#include <cstring>
using namespace std;

Bowl::Bowl() : Bowl("", 4, "", 0, 0) {}

Bowl::Bowl(const string& name, int amount, const string& contents, unsigned int size, int initVal)
    : bowlName(name), amount(amount), contents(contents), arrSize(size) {
    if (size > 0) {
        arr = new int[size];
        for (unsigned i = 0; i < size; ++i)
            arr[i] = initVal;
    }
    else {
        arr = nullptr;
    }
}

Bowl::~Bowl() {
    delete[] arr;
}

string Bowl::getBowlName() const { return bowlName; }
int Bowl::getAmount() const { return amount; }
string Bowl::getContents() const { return contents; }
int* Bowl::getArr() const { return arr; }
unsigned int Bowl::getArrSize() const { return arrSize; }

void Bowl::setBowlName(const string& bowlName) { this->bowlName = bowlName; }
void Bowl::setAmount(int amount) {this->amount = amount; }
void Bowl::setContents(const string& contents) { this->contents = contents; }
void Bowl::setArr(const int* newArr, unsigned int size) {
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

void Bowl::take() { cout << "Taking contents out of " << bowlName << "\n"; --amount; }
void Bowl::input() { cout << "Refilling the " << bowlName << "\n"; ++amount; }
void Bowl::checkAmount() { cout << bowlName << " has " << amount << " of " << contents << "\n"; }