#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int numNodos;
    cin >> numNodos; // Leer cuantos nodos hay
    vector<int> grafo[numNodos]; // Es una lista de adyacencia para representar el grafo 
    
    // Para poder leer las aristas
    int numAristas;
    cin >> numAristas;

    // Leer las aristas e insertarlas en la lista de adyacencia.
    for (int i = 0; i < numAristas; i++) {
        int nodoOrigen, nodoDestino;
        cin >> nodoOrigen >> nodoDestino;
        // Añadir el nodo destino a la lista del nodo origen para representar una arista.
        grafo[nodoOrigen].push_back(nodoDestino);
    }
    return 0; 
}