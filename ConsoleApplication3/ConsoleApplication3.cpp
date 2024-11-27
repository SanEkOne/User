#include <iostream>

using namespace std;

class User {
    string name;
    string surname;
    int age;
public:
    static int amountOfUsers;
    User(string name, string surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
        IncrementAmountOfUsers(1);
    }

    static void IncrementAmountOfUsers(int x) {
        amountOfUsers += x;
    }
};

int User::amountOfUsers = 0;

int main() {
    cout << User::amountOfUsers << endl;
    User obj = { "Sasha", "Ostapenko", 54 };
    cout << User::amountOfUsers << endl;
}