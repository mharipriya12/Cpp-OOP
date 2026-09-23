#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
public:
    int mark;

    void displayMark() {
        cout << "Mark: " << mark << endl;
    }
};

int main() {
    Student s;

    cin >> s.name;
    cin >> s.mark;

    s.displayName();
    s.displayMark();

    return 0;
}
