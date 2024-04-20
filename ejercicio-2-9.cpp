/*Escriba una sola instruccion o linea en C++ que realice cada una de las siguientes tareas:
Imprime escriba dos numeros
Asignar el producot de las variables b y c a la variable a
Indicar que un programa va a relaizar un calculo de nomina
Recibir tres valores de entrada del teclado y colocarlos en variabels enteras a,b y c*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Escriba dos numeros";
    int a,b,c;
    cin>>b>>c;
    a=b*c;
    cout<<"Este programa te va a calcular la nomina";
    cin>>a>>b>>c;
    return 0;
}