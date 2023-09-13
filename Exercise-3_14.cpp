#include <iostream>
#include <string>
#include <list>
#include "Accounts.h"
using namespace std;

int main(){

    //Aclaro no entendi muy bien este segun lo traducido dice que haga un inicializador de lista para que eso inicialize un objeto o algo asi (Pd: De el libro en español que primero , no todos saben o quieren saber ingles y segundo la falta de naturalidad en el idioma no puede ser entendido muchas veces y aveces hay confusiones)
    list<string> l;
    l = {"Alberto Fabrizzio","Freyno Caceres"};
    list<double> l2;
    l2 = {1300};
    list<int> l3;
    l3 = {54381};
    Account cuenta1(l3.front(),l.front(),l.back(),l2.front());

    cout<<cuenta1.getName()<<endl;
    return 0;
}