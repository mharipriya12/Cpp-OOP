#include <iostream>
using namespace std;

class Calculator {
public:
    virtual void calculate() = 0;
};

class Addition : public Calculator {
public:
    void calculate() {
        int a, b;

        cin >> a >> b;

        cout << "Sum: " << a + b;
    }
};

int main() {
    Addition obj;

    obj.calculate();

    return 0;
}
