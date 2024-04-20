/*Escriba un programa que pida al usuario dos numeros, obten esos dos numeros del usuario e imprima la suma, producto, diferencia y cociencte de los dos numeros*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"escriba dos numeros";
    cin>>a>>b;
    cout<<"La suma de los dos numeros es: "<<a+b;
    cout<<"\n La resta de los dos numeros es: "<<a-b;
    cout<<"\n La multiplicacion de los dos numeros es: "<<a*b;
    cout<<"\n La division de los dos numeros es: "<<a/b;
}