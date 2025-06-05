#include "Closet.h"
#include <iostream>
using namespace std;

void Closet::takeContents() {
    cout << "Taking " << contents << " from " << closetName << "\n";
    contentsCount--;
}
void Closet::putContents() {
    cout << "Putting " << contents << " into " << closetName << "\n";
    contentsCount++;
}

void Closet::checkContents() {
    cout << closetName << " has " << contentsCount << " pieces of " << contents << "\n";
}