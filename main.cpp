#include <iostream>
#include "Persona.h"
using namespace std;
template <typename T>
T maximo(T a, T b);
int main() {
    Persona p1("Joao", 19,60);
    Persona p2("Abraham",18,90);

    if (p1>p2) {
        p1.mostrar();
        cout<<" es mayor que "<<endl;
        p2.mostrar();
    }else {
        p2.mostrar();
        cout<<"p2 es mayor que p1"<<endl;
        p1.mostrar();
    }

    Persona mayor=maximo(p1,p2);
    mayor.mostrar();
    return 0;
}

template <typename T>
T maximo(T a, T b) {
    return (a>b)?a:b;
}