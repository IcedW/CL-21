#include <string>
using namespace std;

class Cup {
private:
    string cupName;
    int amount = 1;
    string contents;
    int* arr;
    unsigned int arrSize;

public:
    Cup();
    Cup(const string& name, int amount, const string& contents, unsigned int size, int initVal);
    ~Cup();

    string getCupName() const;
    int getAmount() const;
    string getContents() const;
    int* getArr() const;
    unsigned int getArrSize() const;

    void setCupName(const string& name);
    void setAmount(int amount);
    void setContents(const string& contents);
    void setArr(const int* newArr, unsigned int size);

    void drink();
    void refill();
    void checkAmount();
};