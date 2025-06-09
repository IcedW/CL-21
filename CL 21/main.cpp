#include <iostream>
#include "bowl.h"
#include "cup.h"
#include "box.h"
#include "window.h"
#include "closet.h"

using namespace std;

int main() {
    Bowl fruitBowl;
    fruitBowl.setBowlName("Fruit bowl");
    fruitBowl.setContents("Apple(s)");
    fruitBowl.setAmount(4);
    fruitBowl.take();
    fruitBowl.checkAmount();
    fruitBowl.take();
    fruitBowl.checkAmount();
    fruitBowl.input();
    fruitBowl.checkAmount();
    fruitBowl.take();
    fruitBowl.checkAmount();

    cout << "\n";

    Cup teaCup;
    teaCup.setCupName("Tea Cup");
    teaCup.setContents("Green tea");
    teaCup.setAmount(1);
    teaCup.drink();
    teaCup.checkAmount();
    teaCup.refill();
    teaCup.checkAmount();

    cout << "\n";

    Box toyBox;
    toyBox.setBoxName("Toy Box");
    toyBox.setContents("Toys");
    toyBox.setAmount(2);
    toyBox.takeOut();
    toyBox.checkAmount();
    toyBox.putIn();
    toyBox.checkAmount();

    cout << "\n";

    Window roomWindow;
    roomWindow.setWindowName("Bedroom Window");
    roomWindow.setView("Garden");
    roomWindow.setTimesOpened(0);
    roomWindow.open();
    roomWindow.open();
    roomWindow.close();
    roomWindow.checkView();

    cout << "\n";

    Closet bedroomCloset;
    bedroomCloset.setClosetName("Bedroom Closet");
    bedroomCloset.setContents("Clothes");
    bedroomCloset.setClothesCount(5);
    bedroomCloset.takeClothes();
    bedroomCloset.checkContents();
    bedroomCloset.putClothes();
    bedroomCloset.checkContents();
}