/*escriba un programa que ´pida al usuario que escriba dos enteros, obtnea los nueros del usuario y luego impria el nuemro más grande, sucedio de las palabras "es más grande". Si los numero osn iguales, imprima el mensaje "es
mas grande. Si son guales, que impirma Estos numeros son iguales0"*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Escriba dos numeros";
    cin>>a>>b;
    if(a>b) cout<<a<<" es mas grande";
    else if(a==b) cout<<"Estos numeros son iguales";
    else cout<<b<<" es mas grande";
    return 0;
}