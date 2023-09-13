#include <iostream>
#include <string>
#include "ATM.h"

using namespace std;

int main(){

    Account cuenta1{"Tilin Insano",100};
    Account cuenta2{"Tego Calderon",20};

    cout<< "cuenta 1: "<<cuenta1.getName()<<" , Y su saldo es: S/."<<cuenta1.getBalance()<<endl;
    cout<< "cuenta 2: "<<cuenta2.getName()<<" , Y su saldo es: S/."<<cuenta2.getBalance()<<endl;

    cout<<"\nEntrar la cantidad de deposito para la cuenta de: "<<cuenta1.getName()<<endl;
    int depositAmount;
    cin>> depositAmount;
    cout<<"Añadiendo S/."<< depositAmount <<" A el saldo de: "<<cuenta1.getName()<<endl;
    cuenta1.deposit(depositAmount);

    cout<<"\nEntrar la cantidad de deposito para la cuenta de: "<<cuenta2.getName()<<endl;
    cin>> depositAmount;
    cout<<"Añadiendo S/."<< depositAmount <<" A el saldo de: "<<cuenta2.getName()<<endl;
    cuenta2.deposit(depositAmount);

    cout<< "cuenta 1: "<<cuenta1.getName()<<" , Y su saldo es: S/."<<cuenta1.getBalance()<<endl;
    cout<< "cuenta 2: "<<cuenta2.getName()<<" , Y su saldo es: S/."<<cuenta2.getBalance()<<endl;

    cout<<"\nEntrar la cantidad que desea retirar de la cuenta de: "<<cuenta1.getName()<<endl;
    int withdrawAmount;
    cin>>withdrawAmount;
    bool x;
    x = true;
    while (x==true){
        if (withdrawAmount==0){
            cout<<"No puedde retirar S/.0, intentelo denuevo"<<endl;
            cout<<"\nEntrar la cantidad que desea retirar de la cuenta de: "<<cuenta1.getName()<<endl;
            cin>>withdrawAmount;
        }
        else {
            cuenta1.withdraw(withdrawAmount);
            cout<<cuenta1.getFrase()<<endl;
            x=false;
        }
    }
    
    cout<< "cuenta 1: "<<cuenta1.getName()<<" , Y su saldo es: S/."<<cuenta1.getBalance()<<endl;
    cout<< "cuenta 2: "<<cuenta2.getName()<<" , Y su saldo es: S/."<<cuenta2.getBalance()<<endl;
    return 0;
}
