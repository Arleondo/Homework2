#include <iostream>
#include <string>
#include "MotorVehicle.h"
using namespace std;

int main(){
    //Auto 1

    Vehiculodemotor motor1("Toyota","Premium","Rojo", 2024, 1600);

    cout<<motor1.getValues()<<endl;
    int a=2023;
    motor1.setAñodefabric(a);
    cout<<motor1.getValues()<<endl;

    return 0;
}