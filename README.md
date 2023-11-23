# TC1033.302
Este código es para la administración de una empresa papelera, dentro de este código se registran principalmente información de los empleados, los materiales guardados y los servicios que estan disponibles. La clase principal (Papeleria) esta compuesto principalmente por el nombre de la empresa, la clase de empleados, la clase de servicios y como adicional los materiales. Los servicios de impresión y vender materiales heredan los atributos de la clase servicios y tienen como composicion a los clientes. La clase clientes solo guarda información principal como el nombre y el dinero que disponen.
El código puede agregar materiales de un objeto Papeleria y guardar objetos creados para la clase Materiales, puede guardar nombre del material y su cantidad. A su vez tambien puede desplegar los datos guardados.

La empresa papelera tiene como metodos principales el despedir y contratar
Los empleados tienen como metodos principales el trabajar
Los materiales y la clase servicios tienen como metodo el contar todos los materiales guardados
La clase de impresora tiene como metodos el imprimir y escanear
La clase de vender materiales tiene como método el vender los materiales guardados
La clase de cliente tiene como métodos principales el comprar y pedir_copias

Para usar el código, puede programar dentro del archivo mainpape.cpp y hacer lo siguiente:
- Puede crear un objeto de la clase Papeleria asignandole un nombre al objeto y a su vez entre parentesis asignar el nombre de la papeleria. Con la clase Papeleria puede agregar objetos de la clase Materiales y guardarlos para despues imprimirlos en el compilador. Solo tiene que ingresar la siguiente estructura:
          nombre_objeto. agregarMaterial("Nombre_material", cantidad_material);
- Si quiere agregar más o menos de cuatro materiales para un objeto Papeleria, en el archivo Papeleria.h en la linea 19 y 53 cambie el 4 por la cantidad de materiales que desea guardar.
- Puede crear un objeto de la clase Empleados asignandole un nombre al objeto y a su vez entre parentesis asignar el nombre del empleado, su edad y su salario.
- Puede crear un objeto de la clase Servicios asignandole un nombre al objeto y a su vez entre parentesis asignar el precio del papel para imprimir y el precio de los materiales escolares.
- Puede crear un objeto de la clase Impresora asignandole un nombre al objeto y a su vez entre parentesis asignar el costo de impresion y el costo de escaneo.
- Puede crear un objeto de la clase VenderMaterial asignandole un nombre al objeto y a su vez entre parentesis asignar el costo de material.
- Puede crear un objeto de la clase Cliente asignandole un nombre al objeto y a su vez entre parentesis asignar el nombre del cliente y su dinero.
  
De momento el código no sirve al relacionar las demas clases (Empleados, Servicios, Impresora, VenderMaterial y Cliente) con la clase principal "Papeleria". No sirve aún para los temas de heredación y complementación.
