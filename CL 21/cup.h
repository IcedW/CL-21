#include <string>
using namespace std;

class Cup {
public:
    string cupName;
    int amount = 1;
    string contents;
    void drink();
    void refill();
    void checkAmount();
};