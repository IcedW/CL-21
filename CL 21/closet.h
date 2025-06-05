#include <string>
using namespace std;

class Closet {
public:
    string closetName;
    int contentsCount = 5;
    string contents;
    void takeContents();
    void putContents();
    void checkContents();
};