#include <string>
#ifndef Papeleria_H
#define Papeleria_H
#include "empleados.h"
#include "materiales.h"
#include "servicios.h"
/*
#include "Impresora"
#include "Vender Material"
#include "Clientes"
*/

class Papeleria{
    private:
        std::string nombre_pape;
    public:
        Papeleria(): nombre_pape(""){};
        Papeleria(std::string nom):nombre_pape(nom){};
//GETTER
        std::string get_nombre_pape();
//SETTER
        void set_nombre_pape(std::string);
//FUNCION EXTRA
        void despedir(int);
        void contratar(int);
};
    std::string Papeleria::get_nombre_pape(){
        return nombre_pape;
    }

    void Papeleria::set_nombre_pape(std::string nom){
        nombre_pape = nom;
    }

    void Papeleria::despedir(int Des){
        
    }
    void Papeleria::contratar(int Con){
        
    }

#endif