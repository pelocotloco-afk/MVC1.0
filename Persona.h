#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

namespace Model {

    class Persona {
    private:
        int id;
        string nombre;
        int edad;
        string correo;
        string direccion;
        string contacto;

    public:
        Persona();
        Persona(int id, string nombre, int edad, string correo);
        ~Persona();

        void setId(int id);
        void setNombre(string nombre);
        bool setEdad(int edad);
        void setCorreo(string correo);
        void setDireccion(string direccion);
        void setContacto(string contacto);

        int getId() const;
        string getNombre() const;
        int getEdad() const;
        string getCorreo() const;
        string getDireccion() const;
        string getContacto() const;

        string ingresarDatos();
        string mostrarDatos();
        bool esMayorDeEdad() const;
    };

}

#endif