#include <string>
#ifndef Clientes_H
#define Clientes_H

class Clientes{
    private:
        std::string nombre;
        float dinero;
    public:
        Clientes(): nombre(""),dinero(0){};
        Clientes(std::string nomc,float din):nombre(nomc),dinero(din){};
//GETTER
        std::string get_nombre();
        float get_dinero();
//SETTER
        void set_nombre(std::string);
        void set_dinero(float);
//FUNCION EXTRA
        void comprar(bool);
        void pedir_copias(bool);
};
    std::string Clientes::get_nombre(){
        return nombre;
    }
    float Clientes::get_dinero(){
        return dinero;
    }

    void Clientes::set_nombre(std::string nomc){
        nombre = nomc;
    }
    void Clientes::set_dinero(float din){
        dinero = din;
    }
    void Clientes::comprar(bool com){
        ;
    }
    void Clientes::pedir_copias(bool pco){
        ;
    }

#endif