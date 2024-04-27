#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> colita; // Creando la cola con valores de tipo enteros 
    colita.push(1); // Es el "enqueue", es decir, añade el valor a la cola
    colita.push(2);
    colita.push(3);
    colita.pop(); // Es "dequeue", su utilidad es sacar de la cola el primer valor usando FIFO
    colita.front(); // Metodo para ver el primer valor pero sin sacarlo de la cola
    colita.empty(); // Verificar si esta vacia, retornarno un booleano como respuesta
    return 0;
}
