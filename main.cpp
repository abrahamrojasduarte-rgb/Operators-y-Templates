#include <iostream>
#include "Persona.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Persona p1("Joao", 19,60);
    Persona p2("Abraham",18,90);

    if (p1<p2) {
        cout<<"p1 es mayor que p2"<<endl;
    }else {
        cout<<"p2 es mayor que p1"<<endl;
    }
    return 0;
}