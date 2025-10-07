//
// Created by jmarr on 06/10/2025.
//

#include <iostream>

using namespace std;

int main() {
    /* Sentencia if else simple */
    /*
    int numero, dato = 5;

    cout<<"Digite un numero: \n"; cin>>numero;

    if (numero != dato) {
        cout<<"El numero es diferente a 5";
    }

    else {
        cout<<"El numero es igual a 5\n";
    }
    */
    /*Sentencia switch */
    /*
    int numero2;

    cout<<"Digite un numero 1, 2 o 3: \n"; cin>>numero2;

    switch (numero2) {
        case 1:
            cout<<"El numero es 1";
            break;
        case 2:
            cout<<"El numero es 2";
            break;
        case 3:
            cout<<"El numero es 3";
            break;
        default: cout<<"El numero ingresado no esta entre 1 a 3 \n";
    }
    */
    /* 1. Escriba un programa que lea dos números y deermine cuál de ellos
     * es el mayor. */
    /*
    int n1, n2, n3;

    cout<<"\nIngrese el valor de n1: \n"; cin>>n1;
    cout<<"\nIngrese el valor de n2: \n"; cin>>n2;
    cout<<"\nIngrese el valor de n3: \n"; cin>>n3;

    if (n1 > n2 && n1 > n3) {
        cout<<"\nEl numero mayor es: "<<n1<<endl;
    }
    else if (n2 > n1 && n2 > n3) {
        cout<<"\nEl numero mayor es: "<<n2<<endl;
    }
    else if (n3 > n1 && n3 > n2) {
        cout<<"\nEl numero mayor es: "<<n3<<endl;
    }
    else {
        cout<<"\nNo hay numero mayor"<<endl;
    }
    */

    /* 3- Realice un programa que lea un valor entero y determine
     * si se trata de un número par o impar */

    /*
    int numero_par;

    cout<<"Ingrese un numero: \n"; cin>>numero_par;

    if (numero_par%2==0) {
        cout<<"El numero es par";
    }
    else {
        cout<<"El numero es impar";
    }
    */

    /*4. Realizar un programa que identifique si el numero es positivo
     *o negativo */
    /*
    int numero;

    cout<<"Ingrese un numero: \n"; cin>>numero;

    if (numero >=0) {
        cout<<"El numero es positivo";
    }
    else {
        cout<<"El numero es negativo";
    }
    */

    /*5. Realizar un programa que identifique si una letra es vocal o consonante */
    char letra;

    cout<<"Ingrese una letra: \n"; cin>>letra;

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"La letra es vocal minuscula";
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<"La letra es vocal mayuscula";
            break;
        default:
            cout<<"La letra es consonante";
            break;
    }

    return 0;

}