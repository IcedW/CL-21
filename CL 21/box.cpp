#include "box.h"
#include <iostream>
#include <cstring>
using namespace std;

Box::Box() : Box("", 2, "", 0, 0) {}

Box::Box(const string& name, int amount, const string& contents, unsigned int size, int initVal)
    : boxName(name), amount(amount), contents(contents), arrSize(size) {
    if (size > 0) {
        arr = new int[size];
        for (unsigned i = 0; i < size; ++i)
            arr[i] = initVal;
    }
    else {
        arr = nullptr;
    }
}

Box::~Box() {
    delete[] arr;
}

string Box::getBoxName() const { return boxName; }
int Box::getAmount() const { return amount; }
string Box::getContents() const { return contents; }
int* Box::getArr() const { return arr; }
unsigned int Box::getArrSize() const { return arrSize; }

void Box::setBoxName(const string& name) { this->boxName = name; }
void Box::setAmount(int amount) { this->amount = amount; }
void Box::setContents(const string& contents) { this->contents = contents; }
void Box::setArr(const int* newArr, unsigned int size) {
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

void Box::takeOut() { cout << "Taking item out of " << boxName << "\n"; --amount; }
void Box::putIn() { cout << "Putting item into " << boxName << "\n"; ++amount; }
void Box::checkAmount() { cout << boxName << " contains " << amount << " of " << contents << "\n"; }