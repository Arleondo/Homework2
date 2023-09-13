#include <iostream>
#include <string>
using namespace std;

class Vehiculodemotor {
    public:
        Vehiculodemotor(string marca,string tipocombustible,string color,int añodefabricacion,int capacidaddemotor)
            : marca(marca),tipocombus(tipocombustible),fabric(añodefabricacion),color(color),capacidad(capacidaddemotor){}
        
        string getValues()const{
            string frase;
            frase="Marca: "+marca+"\nTipo de combustible: "+tipocombus+"\nAño de fabricacion: "+to_string(fabric)+"\nCapacidad del motor: "+to_string(capacidad);
            return frase;
        }

        string getMarca()const{
            return marca;
        }

        string getTipodecombus()const{
            return tipocombus;
        }

        int getAñodefabric()const{
            return fabric;
        }

        string getColor()const{
            return color;
        }

        int getCapacidad()const{
            return capacidad;
        }

        void setMarca(string m){
            marca=m;
        }

        void setCombustible(string combus){
            tipocombus=combus;
        }

        void setAñodefabric(int fabricacion){
            fabric=fabricacion;
        }

        void setColor(string colores){
            color=colores;
        }

        void setCapacidaddemotor(int capacidadde){
            capacidad=capacidadde;
        }

    private:

        string color;
        string marca;
        string tipocombus;
        int fabric;
        int capacidad;
};