#include "PersonaController.h"
#include <iostream>
using namespace std;

namespace Controller {

    PersonaController::PersonaController(View::UI_edad* vista, Model::Persona* modelo) {
        this->vista = vista;
        this->modelo = modelo;
        this->datosIngresados = false;
        ejecutar();
    }

    PersonaController::~PersonaController() {}

    void PersonaController::ejecutar() {
        int opcion;
        do {
            vista->mostrarMenu();
            opcion = vista->getOpcion();

            switch (opcion) {
            case 1:
                ingresarPersona();
                break;
            case 2:
                mostrarPersona();
                break;
            case 3:
                verificarMayorEdad();
                break;
            case 4:
                vista->mostrarMensaje("¡Hasta luego!");
                break;
            default:
                vista->mostrarError("Opcion no valida");
            }

            if (opcion != 4 && opcion >= 1 && opcion <= 3) {
                vista->pausar();
            }

        } while (opcion != 4);
    }

    void PersonaController::ingresarPersona() {
        vista->prompt("\n--- INGRESAR PERSONA ---\n");

        string nombre = vista->getNombre();
        int edad = vista->getEdad();
        string correo = vista->getCorreo();
        string direccion = vista->getDireccion();
        string contacto = vista->getContacto();

        bool edadValida = modelo->setEdad(edad);

        if (edadValida) {
            modelo->setNombre(nombre);
            modelo->setCorreo(correo);
            modelo->setDireccion(direccion);
            modelo->setContacto(contacto);
            datosIngresados = true;
            vista->mostrarExito("Persona registrada correctamente");
        }
        else {
            vista->mostrarError("No es posible asignar esa edad. El rango es 1-100 años");
        }
    }

    void PersonaController::mostrarPersona() {
        if (!datosIngresados) {
            vista->mostrarError("Primero debe ingresar los datos (Opcion 1)");
            return;
        }
        vista->mostrarMensaje(modelo->mostrarDatos());
    }

    void PersonaController::verificarMayorEdad() {
        if (!datosIngresados) {
            vista->mostrarError("Primero debe ingresar los datos (Opcion 1)");
            return;
        }

        if (modelo->esMayorDeEdad()) {
            vista->mostrarExito(modelo->getNombre() + " es MAYOR de edad");
        }
        else {
            vista->mostrarError(modelo->getNombre() + " es MENOR de edad");
        }
    }

}