#include <iostream>
#include <string>

class ATM {
private:
    std::string accountNumber;
    std::string name;
    double balance;
    int pin;

public:
    void setAccountInfo(std::string accNum, std::string n, double bal, int p) {
        accountNumber = accNum;
        name = n;
        balance = bal;
        pin = p;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds." << std::endl;
        } else {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
        }
    }

    void viewBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }

    void transfer(ATM& other, double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds." << std::endl;
        } else {
            balance -= amount;
            other.balance += amount;
            std::cout << "Transfer successful." << std::endl;
        }
    }

    void changePin(int newPin) {
        pin = newPin;
        std::cout << "PIN changed successfully." << std::endl;
    }
};

int main() {
    ATM myAccount;
    myAccount.setAccountInfo("12345678", "John Doe", 1000.0, 1234);

    myAccount.viewBalance();

    myAccount.withdraw(200.0);

    ATM otherAccount;
    otherAccount.setAccountInfo("87654321", "Jane Smith", 500.0, 4321);

    myAccount.transfer(otherAccount, 300.0);

    myAccount.changePin(5678);

    return 0;
}