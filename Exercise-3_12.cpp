#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main(){

    Date fecha1(30,30,2024);
    cout<<fecha1.getMes()<<"\n"<<fecha1.displaydate()<<endl;

    return 0;
}