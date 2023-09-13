#include <iostream>
#include <string>
using namespace std;

class Date {

    public:

        Date(int Month,int Day,int Year){
            dia=Day;
            Año=Year;
            if (Month<13 && Month>0){
                Mes=Month;
            }
            else{
                Mes=1;
            }
            }

        string displaydate()const{
                return to_string(Mes)+'/'+to_string(dia)+"/"+to_string(Año);
        }

        void setMes(int(m)){
            if (Mes>0 && Mes<13){
                Mes=m;
            }
        }

        void setDia(int(d)){
            dia=d;
        }

        void setAño(int(A)){
            Año=A;
        }

        int getMes()const{
            return Mes;
        }

        int getDia()const{
            return dia;
        }

        int getAño()const{
            return Año;
        }

    private:
        int Mes;
        int dia;
        int Año;
};