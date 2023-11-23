#ifndef Papeleria_H
#define Papeleria_H
#include "empleados.h"
#include "materiales.h"
#include "servicios.h"
#include <string>
#include <iostream>
#include <sstream>
/*
#include "Impresora"
#include "Vender Material"
#include "Clientes"
*/

class Papeleria{
    private:
        std::string nombre_pape;
        Materiales material[4];
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
        void agregarMaterial(std::string, int, int);
        std::string anaqueles();
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
    void Papeleria::agregarMaterial(std::string nombre_material, int cantidad, int no_anaquel){
        material[no_anaquel] = Materiales(nombre_material,cantidad);
    }

    std::string Papeleria::anaqueles(){
        std::stringstream aux;
            for(int i = 0; i < 4; i++){
                aux << "Material: " << i << " " << this->material[i].to_string() << "\n";
            }
            return aux.str();
    }

#endif
