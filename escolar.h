/*
 * Proyecto Papeleria
 * Angel David Candelario Rolon
 * A01712387
 * 30/11/2023
 */

/*
 * Clase Escolar, hereda los atributos de la clase
 * Marca y tiene como atributos el nombre y el precio del kit
 */

#ifndef Escolar_H
#define Escolar_H
#include <string>
#include <iostream>
#include "materiales.h"
#include <sstream>


class Escolar:public Materiales{
    private:
        std::string nombre;
        float precio;

    public:
        Escolar():nombre(""),precio(0.0){};
        Escolar(std::string mar,std::string nom,float pre):Materiales(mar),nombre(nom), precio(pre){};
//GETTER
        std::string get_nombre();
        float get_precio();
//SETTER
        void set_nombre(std::string);
        void set_precio(float);

};
    std::string Escolar::get_nombre(){
        return nombre;
    }
    float Escolar::get_precio(){
        return precio;
    }

    void Escolar::set_nombre(std::string mar){
        nombre = mar;
    }
    void Escolar::set_precio(float pre){
        precio = pre;
    }
    

#endif
