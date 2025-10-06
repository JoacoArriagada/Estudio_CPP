//
// Created by jmarr on 04/10/2025.
//

/*1. Escribe un programe lea la entrada estándar dos números y muestre
 * en la salida estándar su suma, resta, multiplicación y división
 */

#include <iostream>

using namespace std;

int main() {

    int numero_1, numero_2, suma=0,resta=0,multiplicacion=0,division=0;

    cout<<"Ingrede numero uno: \n";
    cin>>numero_1;
    cout<<"Ingrede numero dos: \n";
    cin>>numero_2;

    suma = numero_1 + numero_2;

    resta = numero_1 - numero_2;

    multiplicacion = numero_1 * numero_2;

    division = numero_1 / numero_2;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;


    return 0;
}
