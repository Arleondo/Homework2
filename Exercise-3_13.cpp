#include <iostream>
#include <string>
#include "ATM_v2.h"
using namespace std;

int main(){

    Account cuenta1{"Tilin Insano",100};
    Account cuenta2{"Tego Calderon",20};

    cout<<cuenta1.displayAccount(cuenta1)<<endl;
    cout<<cuenta2.displayAccount(cuenta2)<<endl;

    cout<<"\nEntrar la cantidad de deposito para la cuenta de: "<<cuenta1.getName()<<endl;
    int depositAmount;
    cin>> depositAmount;
    cout<<"Añadiendo S/."<< depositAmount <<" A el saldo de: "<<cuenta1.getName()<<endl;
    cuenta1.deposit(depositAmount);

    cout<<"\nEntrar la cantidad de deposito para la cuenta de: "<<cuenta2.getName()<<endl;
    cin>> depositAmount;
    cout<<"Añadiendo S/."<< depositAmount <<" A el saldo de: "<<cuenta2.getName()<<endl;
    cuenta2.deposit(depositAmount);

    cout<<cuenta1.displayAccount(cuenta1)<<endl;
    cout<<cuenta2.displayAccount(cuenta2)<<endl;
}