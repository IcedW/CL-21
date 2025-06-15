#include <string>
using namespace std;

class Bowl {
private:
    string bowlName;
    int amount = 4;
    string contents;
    int* arr;
    unsigned int arrSize;

public:
    Bowl();
    Bowl(const string& name, int amount, const string& contents, unsigned int size, int initVal);
    ~Bowl();

    string getBowlName() const;
    int getAmount() const;
    string getContents() const;
    int* getArr() const;
    unsigned int getArrSize() const;

    void setBowlName(const string& bowlName);
    void setAmount(int amount);
    void setContents(const string& contents);
    void setArr(const int* newArr, unsigned int size);

    void take();
    void input();
    void checkAmount();
};