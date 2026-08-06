// An exception is an unexpected problem that arises during the execution of a program our program terminates suddenly with some errors/issues. Eception occurs during the running of the program.

// the try keyword represents a block of code that may threw an exception placed inside the try block, It's followed by one or more catch blocks. If an exception occurs, try block thros that exception

// the catch statement represents ablock of code that is executed when a particular exception is thrown from the try block. the code to handle the exception is written inside the catch block

// An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statements, then it immediately terminates the current function and starts finding a matching catch block to handle the throw exception.

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    };
    // withdrow
    void withdraw(int balance)
    {
        if (balance > 0 && balance <= this->balance)
        {
            this->balance -= balance;
            cout << balance << " Rs is debited Successfully" << endl;
        }
        else if (balance == 0)
        {
            throw "insufficient balance";
        }
        else if (balance >= this->balance)
        {
            throw "Your Balance is low";
        }
        else
        {
            throw "Invalid amount";
        }
    }
    // desposit
    void deposit(int balance)
    {
        if (balance > 0)
        {
            this->balance += balance;
            cout << balance << " Rs is credited Successfully" << endl;
        }
        else
        {
            throw "Mount should be greater than 0";
        }
    }
};
int main()
{
    Customer c1("Ramu", 1657, 1000);
    try
    {
        c1.withdraw(555500);
        c1.deposit(1000);
    }
    catch (const char *e)
    {
        cout << "Exception : " << e << endl;
    }
}