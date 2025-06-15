#include <string>
using namespace std;

class Box {
private:
    string boxName;
    int amount = 2;
    string contents;
    int* arr;
    unsigned int arrSize;

public:
    Box();
    Box(const string& name, int amount, const string& contents, unsigned int size, int initVal);
    ~Box();

    string getBoxName() const;
    int getAmount() const;
    string getContents() const;
    int* getArr() const;
    unsigned int getArrSize() const;

    void setBoxName(const string& name);
    void setAmount(int amount);
    void setContents(const string& contents);
    void setArr(const int* newArr, unsigned int size);

    void takeOut();
    void putIn();
    void checkAmount();
};