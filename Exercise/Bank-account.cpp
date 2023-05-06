#include <iostream>

using namespace std;


class Account
{
protected:
    double balance;

public:
    Account(double i)
    {
        if (i >= 0.0) {
            balance = i;
        }
        else {
            balance = 0.0;
            cout << "Initial balance is invalid" << endl;
        }
    }
    void credit(double amount)
    {
       balance += amount;
    }
    bool debit(double amount)
    {
        if (balance >= amount){
            balance -= amount;
            return true;
        }
        else {
            cout << "Debit amount exceeded account balance" <<endl;
            return false;
        }
    }
    double getBalance()
    {
        return balance;
    }
};


class SavingsAccount: public Account
{
private:
    double rate;

public:
    SavingsAccount(double amount, double rate): Account(amount)
    {
        this->rate = rate;

    }
    double calculateInterest()
    {
        return balance * rate / 100;
    }
};


class CheckingAccount: public Account
{
private:
    double fee;
public:
    CheckingAccount(double amount, double fee): Account(amount)
    {
        this->fee = fee;
    }

    void credit(double amount) {
        Account::credit(amount);
        balance -= fee;

    }

    void debit(double amount) {
        bool withdrawn = Account::debit(amount);

        if(withdrawn)
            balance -= fee;
    }
};


int main()
{
    Account a1(500.5);
    SavingsAccount s1(567.3,12);
    CheckingAccount c1(787.45, 60);

    cout << "Testing Account Class: " << endl;
    a1.credit(50);
    cout << "Crediting 50 cedis..." << endl;
    cout << "Current Balance: " << a1.getBalance() << endl;
    a1.debit(50);
    cout << "Debiting 50 cedis..." << endl;
    cout << "Current Balance: " << a1.getBalance() << endl;

    double interest = s1.calculateInterest();

    s1.credit(interest);
    double balance = s1.getBalance();
    cout << balance;
}