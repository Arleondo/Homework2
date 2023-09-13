#include <iostream>
#include <string>
using namespace std;

class Factura {
    public:
        //Lo que se hizo para que el valor del IVA sea siempre 0.2 no se le agrego en los valores que se le tiene que pasar a la clase
        Factura(string codigodeparte, string descripciondepieza, int cantidad, int precioporunidad, double descuento)
            : Impuesto(0.2),desc(descripciondepieza),cant(cantidad),codigo(codigodeparte),ppu(precioporunidad),descu(descuento) {}
        
        double getValordeFactura(){
            if (cant,ppu,Impuesto>0 && descu<=0){
                return cant*ppu+((cant*ppu)*Impuesto);
            } else if (descu>0 && cant,ppu,Impuesto>0) {
                double operacion1 = cant*ppu;
                return (operacion1+operacion1*Impuesto)-(((operacion1+operacion1*Impuesto)/100)*descu);
            }else {
                return -1;
                }
        }
        
        void setCodigo(string codigodeparte){
            codigo = codigodeparte;
        }
        
        void setDescripcionpieza(string descripciondepieza){
            desc = descripciondepieza;
        }

        void setCantidad(int(cantidad)){
            cant=cantidad;
        }

        void setPreciopu(int(Preciopu)){
            ppu = Preciopu;
        }

        void setDescuento(int(descuento)){
            descu=descuento;
        }

        string getCodigo() const {
            return codigo;
        }

        string getDescripcion() const {
            return desc;
        }

        int getCantidad() const {
            return cant;
        }
        
        int getPreciopu() const {
            return ppu;
        }

        double getIVA() const {
            return Impuesto;
        }

        double getDescuento() const {
            return descu;
        }

    private:
        string codigo;        
        string desc;
        int cant;
        int ppu;
        double descu;
        double Impuesto;
};