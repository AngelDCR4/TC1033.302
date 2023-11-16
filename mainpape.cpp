#include <iostream>
#include <string>
#include "papeleria.h"
#include "empleados.h"
#include "materiales.h"
#include "servicios.h"
#include "impresora.h"
#include "vendermaterial.h"
#include "clientes.h"

using namespace std;

int main(){
    Papeleria pape_1("Papeleria la Lupita");
    Empleados emp_1("Juanito",24,4241.50);
    Materiales mat_1("Lapices");
    Servicios serv_1(3,10);
    Impresora imp_1(2.5,2);
    Vendermaterial vend_1(10);
    Clientes cli_1("Omar",250);
    cout << pape_1.get_nombre_pape() << endl;
    cout << emp_1.get_nombre() << " " << emp_1.get_edad() << " " << emp_1.get_salario() << endl;
    cout << mat_1.get_lista_materiales() << endl;
    cout << serv_1.get_precio_papel() << " " << serv_1.get_precio_mat_esc() << endl;
    cout << imp_1.get_costo_impresion() << " " << imp_1.get_costo_escaneo() << endl;
    cout << vend_1.get_costo_materiales() << endl;
    cout << cli_1.get_nombre() << " " << cli_1.get_dinero() << endl;
}