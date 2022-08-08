/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

float b;
float h;
float area;

using namespace std;

int main()
{
    cout<<"Ingrese la base del triángulo: ";
    cin>>b;
    cout<<"Ingrese la altura del triángulo: ";
    cin>>h;
    area=(b*h)/2;
    cout<<"El area del triangulo es: "<<area<< endl;

    return 0;
}
