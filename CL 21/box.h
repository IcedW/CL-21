#include <string>
using namespace std;

class Box {
private:
    string boxName;
    int amount = 2;
    string contents;
public:
    string getBoxName() const;
    int getAmount() const;
    string getContents() const;

    void setBoxName(const string& boxName);
    void setAmount(int amount);
    void setContents(const string& contents);

    void takeOut();
    void putIn();
    void checkAmount();
};