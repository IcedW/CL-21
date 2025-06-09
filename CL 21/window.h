#include <string>
using namespace std;

class Window {
private:
    string windowName;
    int timesOpened = 0;
    string view;
public:
    string getWindowName() const;
    int getTimesOpened() const;
    string getView() const;

    void setWindowName(const string& windowName);
    void setTimesOpened(int timesOpened);
    void setView(const string& view);

    void open();
    void close();
    void checkView();
};