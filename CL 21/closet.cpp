#include "closet.h"
#include <iostream>
using namespace std;

string Closet::getClosetName() const {
    return closetName;
}
int Closet::getClothesCount() const {
    return clothesCount;
}
string Closet::getContents() const {
    return contents;
}
void Closet::setClosetName(const string& closetName) {
    this->closetName = closetName;
}
void Closet::setClothesCount(int clothesCount) {
    this->clothesCount = clothesCount;
    cout << "Адреса параметра clothesCount: " << &clothesCount << "\n";
    cout << "Адреса this->clothesCount: " << &this->clothesCount << "\n";
}
void Closet::setContents(const string& contents) {
    this->contents = contents;
}
void Closet::takeClothes() {
    cout << "Taking clothes from " << closetName << "\n";
    clothesCount--;
}
void Closet::putClothes() {
    cout << "Putting clothes into " << closetName << "\n";
    clothesCount++;
}
void Closet::checkContents() {
    cout << closetName << " has " << clothesCount << " pieces of " << contents << "\n";
}