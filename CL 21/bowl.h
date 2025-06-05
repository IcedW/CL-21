#include <string>
using namespace std;

class Bowl {
public:
    string bowlName;
    int amount = 4;
    string contents;
    void take();
    void input();
    void checkAmount();
};