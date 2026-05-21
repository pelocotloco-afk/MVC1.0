#include "UI_edad.h"
#include <iostream>
#include <limits>
using namespace std;

namespace View {

UI_edad::UI_edad() {}
UI_edad::~UI_edad() {}

void UI_edad::prompt(const string& mensaje) {
    cout << mensaje;
}

void UI_edad::mostrarMensaje(const string& mensaje) {
    cout << "\n" << mensaje << endl;
}

void UI_edad::mostrarError(const string& error) {
    cout << "\n[ERROR] " << error << endl;
}

void UI_edad::mostrarExito(const string& exito) {
    cout << "\n[EXITO] " << exito << endl;
}

string UI_edad::getNombre() {
    string nombre;
    cout << "Nombre: ";
    cin >> nombre;
    return nombre;
}

int UI_edad::getEdad() {
    int edad;
    cout << "Edad: ";
    cin >> edad;
    return edad;
}

string UI_edad::getCorreo() {
    string correo;
    cout << "Correo: ";
    cin >> correo;
    return correo;
}

string UI_edad::getDireccion() {
    string direccion;
    cout << "Direccion: ";
    cin.ignore();
    getline(cin, direccion);
    return direccion;
}

string UI_edad::getContacto() {
    string contacto;
    cout << "Contacto: ";
    cin >> contacto;
    return contacto;
}

void UI_edad::mostrarMenu() {
    cout << "\n╔════════════════════════════╗" << endl;
    cout << "║       MENU PRINCIPAL        ║" << endl;
    cout << "╠════════════════════════════╣" << endl;
    cout << "║ 1. Ingresar Persona         ║" << endl;
    cout << "║ 2. Mostrar Datos            ║" << endl;
    cout << "║ 3. Verificar Mayor de Edad  ║" << endl;
    cout << "║ 4. Salir                    ║" << endl;
    cout << "╚════════════════════════════╝" << endl;
    cout << "Opcion: ";
}

int UI_edad::getOpcion() {
    int opcion;
    cin >> opcion;
    return opcion;
}

void UI_edad::pausar() {
    cout << "\nPresione ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

}