#include <iostream>
#include <string>
#include "personalempresa.h"
using namespace std;

int main(){
    Personal persona_1("Angel", "Jefe", 22,0);    
    cout << persona_1.get_nombre() << " ";
    cout << persona_1.get_cargo() << " ";
    cout << persona_1.get_edad() << " ";
    persona_1.salario_rango_horas(8,1);
    cout << persona_1.get_salario();

    Personal persona_2("Omar","Subjefe", 23,0);
    cout << "\n" << persona_2.get_nombre() << " ";
    cout << persona_2.get_cargo() << " ";
    cout << persona_2.get_edad() << " ";
    persona_2.salario_rango_horas(5,2);
    cout <<persona_2.get_salario();
    
    Personal persona_3("Richie", "Master Progra", 20,0);
    cout << "\n" << persona_3.get_nombre() << " ";
    cout << persona_3.get_cargo() << " "; 
    cout << persona_3.get_edad() << " ";
    persona_3.salario_rango_horas(5,3);
    cout << persona_3.get_salario();
}
