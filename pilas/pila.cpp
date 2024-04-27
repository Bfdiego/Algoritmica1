#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    stack<int> pilita; // Creando la pila con valores de tipo enteros 
    
    pilita.push(1); // Metodo para añadir un valor a la pila
    pilita.push(2);
    pilita.pop(); // Metodo para sacar un valor de la pila con LIFO
    pilita.top(); // Metodo para ver el valor de arriba sin sacarlo
    pilita.empty(); // Metodo para saber si esta vacia, recibiendo como respuesta un booleano
} 