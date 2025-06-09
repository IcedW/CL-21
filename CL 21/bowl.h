#include <string>
using namespace std;

class Bowl {
private:
    string bowlName;
    int amount = 4;
    string contents;
public:
    string getBowlName() const;
    int getAmount() const;
    string getContents() const;

    void setBowlName(const string& bowlName);
    void setAmount(int amount);
    void setContents(const string& contents);

    void take();
    void input();
    void checkAmount();
};