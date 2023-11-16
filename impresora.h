#include <string>
#ifndef Impresora_H
#define Impresora_H
#include "servicios.h"
#include "clientes.h"

class Impresora{
    private:
        float costo_impresion;
        float costo_escaneo;
    public:
        Impresora(): costo_impresion(0),costo_escaneo(0){};
        Impresora(float ci,float ce):costo_impresion(ci),costo_escaneo(ce){};
//GETTER
        float get_costo_impresion();
        float get_costo_escaneo();
//SETTER
        void set_costo_impresion(float);
        void set_costo_escaneo(float);
//FUNCION EXTRA
        void imprimir(bool);
        void escanear(bool);
};
    float Impresora::get_costo_impresion(){
        return costo_impresion;
    }
    float Impresora::get_costo_escaneo(){
        return costo_escaneo;
    }

    void Impresora::set_costo_impresion(float ci){
        costo_impresion = ci;
    }
    void Impresora::set_costo_escaneo(float ce){
        costo_escaneo = ce;
    }
    void Impresora::imprimir(bool imp){
        ;
    }
    void Impresora::escanear(bool esc){
        ;
    }
#endif