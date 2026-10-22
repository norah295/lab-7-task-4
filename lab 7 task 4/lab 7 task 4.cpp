#include <iostream>
#include <string>
using namespace std;


double withdraw(double balance);
double deposit(double balance);
void view(double balance);
void view(string name, double oldBalance, double newBalance);

int main() {
    string name;
    double balance = 10000.0; 
    char choice;

    cout << "***Bank System ***\n";
    cout << ">> Please type your name: ";
    cin >> name;

    view(balance);

    do {
        cout << "\n>> Please choose a task :\n";
        cout << "w - withdraw\n";
        cout << "d - deposit\n";
        cout << "e - exit\n";
        cout << ">> ";
        cin >> choice;

        if (choice == 'w' || choice == 'W') {
            double oldBal = balance;
            balance = withdraw(balance);
            view(name, oldBal, balance);
            view(balance);
        }
        else if (choice == 'd' || choice == 'D') {
            double oldBal = balance;
            balance = deposit(balance);
            view(name, oldBal, balance);
            view(balance);
        }
        else if (choice == 'e' || choice == 'E') {
            break;
        }
        else {
            cout << "Error: Invalid choice!!\n";
            view(balance);
        }
    } while (choice != 'e' && choice != 'E');

    return 0;
}


double withdraw(double balance) {
    double amount;
    cout << ">> How much would you like to withdraw? ";
    cin >> amount;
    return balance - amount;
}

double deposit(double balance) {
    double amount;
    cout << ">> How much would you like to deposit? ";
    cin >> amount;
    return balance + amount;
}


void view(double balance) {
    cout << "Your current balance is: " << balance << " S.R\n";
}

void view(string name, double oldBalance, double newBalance) {
    cout << "Customer name: " << name << "\n";
    cout << "Old Balance: " << oldBalance << " S.R\n";
    cout << "New Balance: " << newBalance << " S.R\n";
}