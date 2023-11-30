/*
 * Proyecto Papeleria
 * Angel David Candelario Rolon
 * A01712387
 * 30/11/2023
 */

/*
 * Clase Oficina, hereda los atributos de la clase
 * Marca y tiene como atributos el nombre y el precio del kit
 */

#ifndef Oficina_H
#define Oficina_H
#include <string>
#include <iostream>
#include "materiales.h"
#include <sstream>


class Oficina:public Materiales{
    private:
        std::string nombre;
        float precio;

    public:
        Oficina():nombre(""),precio(0.0){};
        Oficina(std::string mar,std::string nom,float pre):Materiales(mar),nombre(nom), precio(pre){};
//GETTER
        std::string get_nombre();
        float get_precio();
//SETTER
        void set_nombre(std::string);
        void set_precio(float);

};
    std::string Oficina::get_nombre(){
        return nombre;
    }
    float Oficina::get_precio(){
        return precio;
    }

    void Oficina::set_nombre(std::string mar){
        nombre = mar;
    }
    void Oficina::set_precio(float pre){
        precio = pre;
    }
    

#endif
