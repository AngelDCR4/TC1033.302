#include <string>
#ifndef Servicios_H
#define Servicios_H

class Servicios{
    private:
        float precio_papel;
        float precio_mat_esc;
    public:
        Servicios(): precio_papel(0),precio_mat_esc(0){};
        Servicios(float pp,float pme):precio_papel(pp),precio_mat_esc(pme){};
//GETTER
        float get_precio_papel();
        float get_precio_mat_esc();
//SETTER
        void set_precio_papel(float);
        void set_precio_mat_esc(float);
//FUNCION EXTRA
        void contar_materiales(int);
};
    float Servicios::get_precio_papel(){
        return precio_papel;
    }
    float Servicios::get_precio_mat_esc(){
        return precio_mat_esc;
    }

    void Servicios::set_precio_papel(float pp){
        precio_papel = pp;
    }
    void Servicios::set_precio_mat_esc(float pme){
        precio_mat_esc = pme;
    }
    void Servicios::contar_materiales(int cm){
        ;
    }

#endif