#include <string>
#ifndef Materiales_H
#define Materiales_H
#include <sstream>

class Materiales{
    private:
        std::string nombre_material;
        int cantidad;
    public:
        Materiales(){};
        Materiales(std::string nom, int cant):nombre_material(nom),cantidad(cant){};
        std::string to_string();
//GETTER

//SETTER

//FUNCION EXTRA
};

std::string Materiales::to_string(){
    std::stringstream aux;
    aux << nombre_material << " " << "son " << cantidad;
    return aux.str();
}

#endif
