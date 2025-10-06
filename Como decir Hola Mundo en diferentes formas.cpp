//
// Created by jmarr on 04/10/2025.
//

#include <iostream>

using namespace std;

int main() {
    /*De esta forma se puede decir el mensaje con su respectivo espacio pero
    de dos formas diferentes.*/
    cout<<"Hello World"<<endl;
    cout<<"Hello World\n";

    //Tipos de datos básicos de C++

    //Variable de tipo entero, el cual es almacenado en la memoria
    int numero = 15;
    cout<<numero<<endl;

    //Variable de tipo flotante
    float numero_flotante = 10.555;
    cout<<numero_flotante<<endl;

    //Variable de tipo Double
    double numero_doble = 15.555;
    cout<<numero_doble<<endl;

    //Variable de tipo Caracter
    char caracter = 'a';
    cout<<caracter<<endl;

    //Como guardar datos de entrada dados por el usuario
    int numero_usuario;
    cout<<"Ingrese un numero: ";
    cin>>numero_usuario;
    cout<<"\nEl numero ingresado es: "<<numero_usuario<<endl;

    return 0;

}