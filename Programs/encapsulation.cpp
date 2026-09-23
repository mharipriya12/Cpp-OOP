#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    int amount;
    cin >> amount;

    BankAccount account;

    account.setBalance(amount);

    cout << "Balance: " << account.getBalance();

    return 0;
}
