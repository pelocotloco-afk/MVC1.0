#include "UI_edad.h"
#include "Persona.h"
#include "PersonaController.h"

int main() {
    View::UI_edad vista;
    Model::Persona persona;

    Controller::PersonaController controlador(&vista, &persona);

    return 0;
}