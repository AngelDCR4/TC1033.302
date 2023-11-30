/*
 * Proyecto Papeleria
 * Angel David Candelario Rolon
 * A01712387
 * 30/11/2023
 */

/*
 * Descripción: este proyecto para la clase de Pensamiento
 * Computacional Orientado a objetos. Es un programa que almacena
 * los productos principales de una papeleria guardando principalmente
 * su precio y su cantidad de los tipos de kits de papeleria
 */
#include <iostream>
#include <string>
#include "papeleria.h"
#include "materiales.h"

using namespace std;

int main(){
    bool cont = false;
    int seg;
    Papeleria pape_1;
    string nom;
    int res;
    int cant_of;
    float pre_of;
    int cant_es;
    float pre_es;

    cout << "Nombre de la papeleria: ";
    getline(cin,nom);
    pape_1.set_nombre_pape(nom);

    cout << "--------------> Papeleria "<< pape_1.get_nombre_pape() << " <-------------- "<< endl;
    cout << "Las ganancias actuales son: "<< pape_1.get_ganancias() << endl;

    cout << "Su almacen de kits esta vacio" << endl;
    cout << "Defina la cantidad de kits oficinista a anadir: ";
    cin >> cant_of;
    cout << "Defina su precio: ";
    cin >> pre_of;

    cout << "Defina la cantidad de kits escolares: ";
    cin >> cant_es;
    cout << "Defina su precio: ";
    cin >> pre_es;
    cout << "-----------------------------------------------------------------------------" << endl;
    pape_1.agrega_office("Pro-ofice","Kit oficinista",pre_of);
    pape_1.agrega_school("School-kid", "Kit escolar", pre_es);

    pape_1.inventario();

    cout << "Desea vender productos de:" << endl;
    cout << "Oficina  ---> 1" << endl << "Escuela ---> 2" << endl << "Todos ---> 3" << endl << "Seleccione una opcion: ";
    cin >> res;
    pape_1.vender(res,pre_of,pre_es, cant_of,cant_es);
    cout << "Las ganancias actuales son: "<< pape_1.get_ganancias() << endl;
    
}
