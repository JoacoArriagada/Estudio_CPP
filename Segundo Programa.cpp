//
// Created by jmarr on 04/10/2025.
//

/*3. Realice un programaque lea de la entrada estándar los siguientes datos
 una persona

    Edad: dato de tipo entero
    Sexo: dato de tipo carácter.
    Altura en metros: dato de tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estándar*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int Edad;
    string Sexo;
    float Altura;

    cout<<"Ingrese su edad: \n";
    cin>>Edad;
    cout<<"Ingrese su sexo: \n";
    cin>>Sexo;
    cout<<"Ingrese su altura: \n";
    cin>>Altura;

    cout<<"Su edad es: "<<Edad<<"\nSu sexo es: "<<Sexo<<"\nSu altura es: "<<Altura<<endl;

    return 0;


}