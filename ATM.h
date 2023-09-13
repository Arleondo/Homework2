#include <iostream>
#include <string>
using namespace std;

class Account {
    public:

        Account(string accountName, int initialBalance)
            : name{accountName} {
            if (initialBalance>0){
                balance = initialBalance;
            }
        }

        void deposit(int depositAmount) {
            if (depositAmount>0){
                balance = balance + depositAmount;
            }
        }

        void withdraw(int wihtdrawAmount){
            if (wihtdrawAmount<=balance){
                balance = balance-wihtdrawAmount;
                frase = "Retiro exitoso";
            }
            else {
                frase="Monto excede al saldo de la cuenta";
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(string accountName){
            name = accountName;
        }

        string getName() const {
            return name;
        }

        string getFrase() const {
            return frase;
        }
    
    private:
        string name;
        int balance{0};
        string frase;
};