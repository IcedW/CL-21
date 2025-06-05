#include <string>
using namespace std;

class Box {
public:
    string boxName;
    int amount = 2;
    string contents;
    void takeOut();
    void putIn();
    void checkAmount();
};