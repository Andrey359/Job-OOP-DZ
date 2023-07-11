#include <iostream>
#include <string>


using namespace std;

class User {
public:
    string name;
    static User* lastUser;

    User(const string &name) {
        this->name = name;
        lastUser = this;
    }
};
User* User::lastUser = nullptr;

int main()
{
    setlocale(LC_ALL, "");

    User one("one");
    cout << one.name << " -> " << one.lastUser << endl;
    User two("two");
    cout << two.name << " -> " << one.lastUser << endl;

}
