#ifndef UI_EDAD_H
#define UI_EDAD_H

#include <string>
using namespace std;

namespace View {

    class UI_edad {
    public:
        UI_edad();
        ~UI_edad();

        void prompt(const string& mensaje);
        void mostrarMensaje(const string& mensaje);
        void mostrarError(const string& error);
        void mostrarExito(const string& exito);

        string getNombre();
        int getEdad();
        string getCorreo();
        string getDireccion();
        string getContacto();

        void mostrarMenu();
        int getOpcion();
        void pausar();
    };

}

#endif