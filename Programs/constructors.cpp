#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    string name;
    int age;

    cin >> name;
    cin >> age;

    Student s(name, age);

    s.display();

    return 0;
}
