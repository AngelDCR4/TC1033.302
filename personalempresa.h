#include <string>

class Personal{
private:
    std::string nombre;
    std::string cargo;
    int edad;
    float salario;

public:
    Personal();
    Personal(std::string name,std::string job, int age, float sal): nombre(name), cargo(job),edad(age), salario(sal){};
    
std::string get_nombre();
std::string get_cargo();
int get_edad();
float get_salario();

void set_nombre(std::string);
void set_cargo(std::string);
void set_edad(int);
void set_salario(float);

void salario_rango_horas(int, int);
};

std::string Personal::get_nombre(){
    return nombre;
}
std::string Personal::get_cargo(){
    return cargo;
}
int Personal::get_edad(){
    return edad;
}
float Personal::get_salario(){
    return salario;
}

void Personal::set_nombre(std::string name){
        nombre=name;
}
void Personal::set_cargo(std::string job){
        cargo = job;
}
void Personal::set_edad(int age){
    edad = age; 
}
void Personal::set_salario(float sal){
    salario = sal;
};

void Personal::salario_rango_horas(int horas, int rango){
    if(rango == 1){
        salario = salario + (500 * horas);
    }else if (rango == 2)
    {
        salario = salario + (400 * horas);
    }else{
        salario = salario + (300 * horas);
    }
    
}
