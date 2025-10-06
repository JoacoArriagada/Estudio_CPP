//
// Created by jmarr on 05/10/2025.
//

#include <iostream>
#include <cmath>

using namespace std;


int main() {

    //float a,b,c,d,e,f, resultado = 0;

    /* Ejercicio 1: Escribe la siguiente expresión
     *cout<<"Digite el valor de a: \n"; cin>>a;
    cout<<"Digite el valor de b: \n"; cin>>b;

    resultado = (a/b) + 1;

    cout<<"\n El resultado es: "<<resultado<<endl;

    /* redondear cout.precision(2); */
    /*cout.precision(2);
    cout<<"\n El resultado es: "<<resultado<<endl;

    /* Ejercicio 2: Escribe la siguiente expresión
     * matemática como expresión en C++

    cout<<"Digite el valor de a: \n"; cin>>a;
    cout<<"Digite el valor de b: \n"; cin>>b;
    cout<<"Digite el valor de c: \n"; cin>>c;
    cout<<"Digite el valor de d: \n"; cin>>d;

    resultado = (a + b) / (c + d);

    cout<<"\n El resultado es: "<<resultado<<endl;*/

    /* Ejercicio 3: Escribe la expresión en C++

    cout<<"Digite el valor de a: \n"; cin>>a;
    cout<<"Digite el valor de b: \n"; cin>>b;
    cout<<"Digite el valor de c: \n"; cin>>c;
    cout<<"Digite el valor de d: \n"; cin>>d;
    cout<<"Digite el valor de e: \n"; cin>>e;
    cout<<"Digite el valor de f: \n"; cin>>f;

    resultado = (a + (b/c))/(d + (e/f));
    cout.precision(2);
    cout<<"\n El resultado es: "<<resultado<<endl;*/

    /* Ejercicio 4: Escribe la expresión en C++

    cout<<"Digite el valor de a: \n"; cin>>a;
    cout<<"Digite el valor de b: \n"; cin>>b;
    cout<<"Digite el valor de c: \n"; cin>>c;
    cout<<"Digite el valor de d: \n"; cin>>d;

    resultado = a + (b/(c-d));

    cout.precision(2);
    cout<<"\n El resultado es: "<<resultado<<endl; */

    /* Ejercicio 5: Escriba un fragmento de programa que intercambie los valores
    de dos variables

    int x,y,aux;

    cout<<"Digite el valor de x: \n"; cin>>x;
    cout<<"Digite el valor de y: \n"; cin>>y;

    aux = x;
    x= y;
    y = aux;

    cout<<"El valor de x es: "<<x<<endl;
    cout<<"El valor de y es: "<<y<<endl; */

    /* Ejercicio 6: Escriba un programa que lea la nota final de cuatro
     * alumnos y calcule la nota final media de los cuatro alumnos.

    float nota_1, nota_2, nota_3, nota_4, nota_final;

    cout<<"Digite la nota de alumno 1: \n"; cin>>nota_1;
    cout<<"Digite la nota de alumno 2: \n"; cin>>nota_2;
    cout<<"Digite la nota de alumno 3: \n"; cin>>nota_3;
    cout<<"Digite la nota de alumno 4: \n"; cin>>nota_4;

    nota_final = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

    cout<<"\n Nota promedio: "<<nota_final<<endl; */

    /* Ejercicio 7: La calificación final de un estudiante
     * es la media ponderada de tres notas: la nota de prácticas
     * que cuenta un 30% del total, la nota teórica que cuenta un
     * 60% y la nota de participación que cuenta el 10% restante.
     * Escriba un programa que lea de la entrada estándar las tres
     * notas de un alumno y escriba en la salida estándar su nota
     * final.

    float nota_1, nota_2, nota_3, nota_final;

    cout<<"Ingrese nota 1: "<<endl; cin>>nota_1;
    cout<<"Ingrese nota 2: "<<endl; cin>>nota_2;
    cout<<"Ingrese nota 3: "<<endl; cin>>nota_3;

    nota_final = (nota_1 * 0.3) + (nota_2 * 0.6) + (nota_3 * 0.1);

    cout.precision(2);
    cout<<"Nota final: "<<nota_final<<endl; */

    /* Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos
     * catetos de un triángulo rectángulo y escriba en la salida
     * estándar su hipotenusa.

     int cateto_1, cateto_2, hipotenusa;

     cout<<"Ingrese cateto 1: "<<endl; cin>>cateto_1;
     cout<<"Ingrese cateto 2: "<<endl; cin>>cateto_2;

     hipotenusa = sqrt((cateto_1 * cateto_1) + (cateto_2 * cateto_2));
     cout<<"Hipotenusa: "<<hipotenusa<<endl; */

    /* Ejercicio 9: Realice un programa que calcule el valor que toma la
     * siguiente función, para unos valores dados de x e y:
 float x, y, resultado = 0;

    cout<<"Digite el valor de x: \n"; cin>>x;
    cout<<"Digite el valor de y: \n"; cin>>y;

    resultado = sqrt(x)/(pow(y,2)-1);

    cout.precision(2);
    cout<<"\n El resultado es: "<<resultado<<endl;  */

    int a, b, c, x1 = 0, x2 = 0;

    cout<<"Digite el valor de a: \n"; cin>>a;
    cout<<"Digite el valor de b: \n"; cin>>b;
    cout<<"Digite el valor de c: \n"; cin>>c;

    x1= ((-b)+ sqrt(pow(b,2) - (4*a*c)))/(2*a);
    x2= ((-b)- sqrt(pow(b,2) - (4*a*c)))/(2*a);

    cout<<"El valor de x1 es: "<<x1<<endl;
    cout<<"El valor de x2 es: "<<x2<<endl;


    return 0;
}