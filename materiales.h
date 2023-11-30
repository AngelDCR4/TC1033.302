/*
 * Proyecto Papeleria
 * Angel David Candelario Rolon
 * A01712387
 * 30/11/2023
 */

/*
 * Clase Materiales, tiene como atributo la marca del material
 * y lo hereda para los demas tipos de kits
 */

#ifndef Materiales_H
#define Materiales_H
#include <string>
#include <sstream>

class Materiales{
    private:
        std::string marca_material;
    public:
        Materiales():marca_material(""){};
        Materiales(std::string mar):marca_material(mar){};
//GETTER
        std::string get_marca();
//SETTER
        void set_marca(std::string mar);

};

std::string Materiales::get_marca(){
        return marca_material;
}

void Materiales::set_marca(std::string mar){
        marca_material = mar;
}       

#endif
