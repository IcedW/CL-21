#pragma once
#include <string>
using namespace std;

class Closet {
private:
    string closetName;
    int clothesCount = 5;
    string contents;
public:
    string getClosetName() const;
    int getClothesCount() const;
    string getContents() const;

    void setClosetName(const string& closetName);
    void setClothesCount(int clothesCount);
    void setContents(const string& contents);

    void takeClothes();
    void putClothes();
    void checkContents();
};