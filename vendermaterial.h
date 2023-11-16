#include <string>
#ifndef Vendermaterial_H
#define Vendermaterial_H
#include "servicios.h"
#include "clientes.h"

class Vendermaterial{
    private:
        float costo_materiales;
    public:
        Vendermaterial(): costo_materiales(0){};
        Vendermaterial(float vcm):costo_materiales(vcm){};
//GETTER
        float get_costo_materiales();
//SETTER
        void set_costo_materiales(float);
//FUNCION EXTRA
        void vender_materiales(bool);

};
    float Vendermaterial::get_costo_materiales(){
        return costo_materiales;
    }

    void Vendermaterial::set_costo_materiales(float vcm){
        costo_materiales = vcm;
    }

    void Vendermaterial::vender_materiales(bool vm){
        ;
    }

#endif