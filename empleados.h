#include <string>
#ifndef Empleados_H
#define Empleados_H

class Empleados{
    private:
        std::string nombre;
        int edad;
        float salario;
    public:
        Empleados(): nombre(""),edad(0),salario(0){};
        Empleados(std::string nom,int eda, float sal):nombre(nom),edad(eda),salario(sal){};
//GETTER
        std::string get_nombre();
        int get_edad();
        float get_salario();
//SETTER
        void set_nombre(std::string);
        void set_edad(int);
        void set_salario(float);
//FUNCION EXTRA
        void trabajar(bool);
};
    std::string Empleados::get_nombre(){
        return nombre;
    }
    int Empleados::get_edad(){
        return edad;
    }
    float Empleados::get_salario(){
        return salario;
    }
    void Empleados::set_nombre(std::string nom){
        nombre = nom;
    }
    void Empleados::set_edad(int eda){
        edad = eda;
    }
    void Empleados::set_salario(float sal){
        salario = sal;
    }
    void Empleados::trabajar(bool){
        ;
    }

#endif