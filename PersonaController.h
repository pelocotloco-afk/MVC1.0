#define PERSONACONTROLLER_H

#include "Persona.h"
#include "UI_edad.h"

namespace Controller {

    class PersonaController {
    private:
        View::UI_edad* vista;
        Model::Persona* modelo;
        bool datosIngresados;

    public:
        PersonaController(View::UI_edad* vista, Model::Persona* modelo);
        ~PersonaController();

        void ejecutar();
        void ingresarPersona();
        void mostrarPersona();
        void verificarMayorEdad();
    };

}
