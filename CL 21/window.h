#include <string>
using namespace std;

class Window {
private:
    string windowName;
    int timesOpened = 0;
    string view;
    int* arr;
    unsigned int arrSize;

public:
    Window();
    Window(const string& name, int times, const string& view, unsigned int size, int initVal);
    ~Window();

    string getWindowName() const;
    int getTimesOpened() const;
    string getView() const;
    int* getArr() const;
    unsigned int getArrSize() const;

    void setWindowName(const string& name);
    void setTimesOpened(int times);
    void setView(const string& view);
    void setArr(const int* newArr, unsigned int size);

    void open();
    void close();
    void checkView();
};