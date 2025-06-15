#include <string>
using namespace std;

class Closet {
private:
    string closetName;
    int clothesCount = 5;
    string contents;
    int* arr;
    unsigned int arrSize;

public:
    Closet();
    Closet(const string& name, int count, const string& contents, unsigned int size, int initVal);
    ~Closet();

    string getClosetName() const;
    int getClothesCount() const;
    string getContents() const;
    int* getArr() const;
    unsigned int getArrSize() const;

    void setClosetName(const string& name);
    void setClothesCount(int count);
    void setContents(const string& contents);
    void setArr(const int* newArr, unsigned int size);

    void takeClothes();
    void putClothes();
    void checkContents();
};
