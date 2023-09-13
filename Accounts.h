#include <iostream>
#include <string>
#include <list>
using namespace std;

class Account {
    
    public:
        Account(unsigned int Numero,string Primer_nombre,string Apellidos, double InitialBalance)
            : num(Numero),Nombres(Primer_nombre),Apelli(Apellidos),Saldo(InitialBalance){}

        string getName()const{
            return Nombres;
        }
    private:
        unsigned int num;
        string Nombres;
        string Apelli;
        double Saldo;

};