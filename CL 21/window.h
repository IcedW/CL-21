#include <string>
using namespace std;

class Window {
public:
    string windowName;
    int timesOpened = 0;
    string view;
    void open();
    void close();
    void checkView();
};