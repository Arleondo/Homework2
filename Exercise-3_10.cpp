#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main(){

    Factura fact1{"F990077","Silla metalica",30,50,5};
    
    cout<< fact1.getDescuento()<<endl;
    cout<< fact1.getCantidad()<<endl;
    cout<< fact1.getPreciopu()<<endl;
    cout<<"S/."<<fact1.getValordeFactura();
    
    return 0;
}