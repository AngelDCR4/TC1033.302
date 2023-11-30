/*
 * Proyecto Papeleria
 * Angel David Candelario Rolon
 * A01712387
 * 30/11/2023
 */

/*
 * Clase Papeleria, tiene como complementos a los tipos de kits
 * de papeleria, sus metodos son el vender, hacer inventario, agregar
 * kits tanto del tipo escolar y oficinista.
 */

#ifndef Papeleria_H
#define Papeleria_H
#include "oficina.h"
#include "escolar.h"
#include <string>
#include <iostream>
#include <sstream>

class Papeleria{
    private:
        std::string nombre_pape;
        float ganancias;
        Oficina producto_oficina;
        Escolar productos_escuela;
    public:
        Papeleria():nombre_pape(""),ganancias(0.0){};
        Papeleria(std::string name, float gan):nombre_pape(name),ganancias(gan){};
//GETTER
        std::string get_nombre_pape();
        float get_ganancias();
//SETTER
        void set_nombre_pape(std::string name);
        void set_ganancias(float gan);
//FUNCION EXTRA
        void agrega_office(std::string ,std::string ,float);
        void inventario();

        void agrega_school(std::string ,std::string ,float);

        void vender(int res,float pre_of,float pre_es, int cant_of, int cant_es);

};
    std::string Papeleria::get_nombre_pape(){
        return nombre_pape;
    }
    float Papeleria::get_ganancias(){
        return ganancias;
    }
    
    void Papeleria::set_nombre_pape(std::string nom){
        nombre_pape = nom;
    }
    void Papeleria::set_ganancias(float gan){
        ganancias = gan;
    }

    void Papeleria::agrega_office(std::string mar,std::string nom,float pre){
        producto_oficina = Oficina(mar,nom,pre);
    }

    void Papeleria::inventario(){
        std::cout << "En la papeleria " << nombre_pape << " hay " << producto_oficina.get_nombre() << " con un valor de " << producto_oficina.get_precio() << " de la marca "<< producto_oficina.get_marca() << std::endl;
        std::cout << "En la papeleria " << nombre_pape << " hay " << productos_escuela.get_nombre() << " con un valor de " << productos_escuela.get_precio() << " de la marca "<< productos_escuela.get_marca() << std::endl;
    }

    void Papeleria::agrega_school(std::string marc,std::string no,float prec){
        productos_escuela = Escolar(marc,no,prec);
    }


    void Papeleria::vender(int res,float pre_of,float pre_es, int cant_of,int cant_es){
        if(res==1){
            ganancias += producto_oficina.get_precio() * cant_of;
        }else if(res == 2){
            ganancias += productos_escuela.get_precio() * cant_es;
        }else if(res == 3){
            ganancias += (producto_oficina.get_precio() * cant_of) + (productos_escuela.get_precio() * cant_es);
        };
    }
    
#endif
