#include "closet.h"
#include <iostream>
#include <cstring>
using namespace std;

Closet::Closet() : Closet("", 5, "", 0, 0) {}

Closet::Closet(const string& name, int count, const string& contents, unsigned int size, int initVal)
    : closetName(name), clothesCount(count), contents(contents), arrSize(size) {
    if (size > 0) {
        arr = new int[size];
        for (unsigned i = 0; i < size; ++i)
            arr[i] = initVal;
    }
    else {
        arr = nullptr;
    }
}

Closet::~Closet() {
    delete[] arr;
}

string Closet::getClosetName() const { return closetName; }
int Closet::getClothesCount() const { return clothesCount; }
string Closet::getContents() const { return contents; }
int* Closet::getArr() const { return arr; }
unsigned int Closet::getArrSize() const { return arrSize; }

void Closet::setClosetName(const string& name) { this->closetName = name; }
void Closet::setClothesCount(int count) { this->clothesCount = count; }
void Closet::setContents(const string& contents) { this->contents = contents; }
void Closet::setArr(const int* newArr, unsigned int size) {
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

void Closet::takeClothes() { cout << "Taking clothes from " << closetName << "\n"; --clothesCount; }
void Closet::putClothes() { cout << "Putting clothes into " << closetName << "\n"; ++clothesCount; }
void Closet::checkContents() { cout << closetName << " has " << clothesCount << " pieces of " << contents << "\n"; }