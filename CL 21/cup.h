#include <string>
using namespace std;

class Cup {
private:
    string cupName;
    int amount = 1;
    string contents;
public:
    string getCupName() const;
    int getAmount() const;
    string getContents() const;

    void setCupName(const string& cupName);
    void setAmount(int amount);
    void setContents(const string& contents);

    void drink();
    void refill();
    void checkAmount();
};