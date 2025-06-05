#include <iostream>
#include "bowl.h"
#include "cup.h"
#include "box.h"
#include "window.h"
#include "closet.h"
using namespace std;

int main() {
    Bowl fruitBowl;
    fruitBowl.bowlName = "Fruit bowl";
    fruitBowl.contents = "Apple(s)";
    fruitBowl.take();
    fruitBowl.checkAmount();
    fruitBowl.take();
    fruitBowl.checkAmount();
    fruitBowl.input();
    fruitBowl.checkAmount();

    Cup teaCup;
    teaCup.cupName = "Tea Cup";
    teaCup.contents = "Green tea";
    teaCup.drink();
    teaCup.checkAmount();
    teaCup.refill();
    teaCup.checkAmount();

    cout << "\n";

    Box toyBox;
    toyBox.boxName = "Toy Box";
    toyBox.contents = "Toys";
    toyBox.takeOut();
    toyBox.checkAmount();
    toyBox.putIn();
    toyBox.checkAmount();

    cout << "\n";

    Window roomWindow;
    roomWindow.windowName = "Bedroom Window";
    roomWindow.view = "Garden";
    roomWindow.open();
    roomWindow.open();
    roomWindow.close();
    roomWindow.checkView();

    cout << "\n";

    Closet storageCloset;
    storageCloset.closetName = "Storage Closet";
    storageCloset.contents = "Tools";
    storageCloset.takeContents();
    storageCloset.checkContents();
    storageCloset.putContents();
    storageCloset.checkContents();

    return 0;
}
