#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if(amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance\n";
    }

    void showBalance() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    BankAccount b;

    b.deposit(5000);
    b.withdraw(1200);
    b.showBalance();

    return 0;
}
