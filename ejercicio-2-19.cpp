/*Escriba un programa que reciba tres enteros del teclado e imprima la suma, promedio, producto,menor y mayor de estos numeros. El dialopgo de la pantalla ddebe aparecer así:*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Introduzca tres enteros ";
    cin>>a>>b>>c;
    cout<<"\nLa suma es "<<a+b+c;
    cout<<"\nEl promedio es "<<(a+b+c)/3;
    if(a<b&&a<c)cout<<"\nEl menor es "<<a;
    if(b<a&&b<c)cout<<"\nEl menor es "<<b;
    if(c<b&&c<a)cout<<"'\nEl menor es "<<c;
    if(a>b&&a>c)cout<<"\nEl mayor es "<<a;
    if(b>a&&b>c)cout<<"\nEl mayor es "<<b;
    if(c>b&&c>a)cout<<"\nEl mayor es "<<c;
    return 0;
}