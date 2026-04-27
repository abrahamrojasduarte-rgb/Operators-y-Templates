//
// Created by ESCINF on 27/04/2026.
//

#ifndef TEMPLATES_PERSONA_H
#define TEMPLATES_PERSONA_H
#include <iostream>
using namespace std;
class Persona {
private:
    string nombre;
    int edad;
    double peso;


public:
    Persona() {
        nombre = "";
        edad = 0;
        peso= 0;
    }

    Persona(string nombre, int edad,double peso) {
        this->nombre = nombre;
        this->edad = edad;
        this->peso = peso;
    }


    void mostrar() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
    bool compararPorEdad(const Persona& a, const Persona& b) {
        return a.edad > b.edad;
    }

    bool compararPorPeso(const Persona& a, const Persona& b) {
        return a.peso > b.peso;
    }

    bool operator>(const Persona& otra) const {
        return edad > otra.edad ;
    }

    bool operator<(const Persona& otra) const {
        return edad < otra.edad ;
    }

    bool operator==(const Persona& otra) const {
        return edad == otra.edad;
    }


};
#endif //TEMPLATES_PERSONA_H