// Daniela Nohemy Divas Carrillo   9941-23-4568
#include <iostream>  
#include <iomanip>   
#include <string>   

using namespace std;

int main () {

string nombrecliente;
double precio;
int cantidad;
double subtotal, IVA, total;

cout<< "INGRESE EL NOMBRE COMPLETO DEL CLIENTE:";
getline (cin, nombrecliente);

cout<< "INGRESE PRECIO DEL PRODUCTO:" ;
cin >> precio;

cout<< "INGRESE LA CANTIDAD COMPRADA: ";
cin >> cantidad;

subtotal = precio * cantidad;

IVA = subtotal * 0.12;

total = IVA + subtotal; 


cout << fixed << setprecision(2);

cout << "Subtotal: Q" << subtotal << endl;
cout << "IVA (12%): Q" << IVA << endl;
cout << "Total a pagar: Q" << total << endl;

cout << "Desarrollado por: Daniela Divas Carrillo" << endl;

    return 0;
}