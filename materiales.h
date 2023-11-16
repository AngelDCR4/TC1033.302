#include <string>
#ifndef Materiales_H
#define Materiales_H

class Materiales{
    private:
        std::string lista_materiales;
    public:
        Materiales(): lista_materiales(){};
        Materiales(std::string lm):lista_materiales(lm){};
//GETTER
        std::string get_lista_materiales();
//SETTER
        void set_lista_materiales(std::string);
//FUNCION EXTRA
        void contar_materiales(int);
};
    std::string Materiales::get_lista_materiales(){
        return lista_materiales;
    }
    void Materiales::set_lista_materiales(std::string lm){
        lista_materiales = lm;
    }
    void Materiales::contar_materiales(int cont){
        ;
    }

#endif