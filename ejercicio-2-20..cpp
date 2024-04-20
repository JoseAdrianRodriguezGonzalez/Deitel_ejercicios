/**Escriba un rogram que lea el radio de un circulo como un entero e imnprima el diametro del ciruclo,la circunfernecia y el área, use el valor constante 3.141589 pára pi.
 * 
*/
#include<iostream>
using namespace std;
int main(){
    const float pi=3.14159;
    float r;
    cout<<"Escriba un radio";
    cin>>r;
    cout<<"El diametro del circulo es: "<<r*2<<endl;
    cout<<"La circunferencia del ciruclo es: "<<(r*2)/pi<<endl;
    cout<<"El area del circulo es: "<<r*r*pi<<endl;
    return 0;
}