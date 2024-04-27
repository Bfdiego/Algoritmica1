#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grafo[10000];
void dfs (int nodoInicial) {
    stack<int> pilita;
    pilita.push(nodoInicial);
    while(!pilita.empty()){ // Verificar si el stack esta vacio
        int nodoActual = pilita.top(); // Obtener el primer elemento del stack
        pilita.pop();
        if(!vis[nodoActual]) {
            vis[nodoActual] = true; // Marcando como visitado al nodo actual
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){
                int amigo = grafo[nodoActual][i]; // vecino 
                if(!vis[amigo]) { // Verificar si el vecino fue visitado
                    pilita.push(amigo);
                } 
            }   
        }
    }
}


int main() {
    input; // Para leer los input de un archivo
    output; // Para guardar el output en un archivo txt
    int nodos, aristas;
    cin>>nodos>>aristas; 
    for(int i = 0 ; i < aristas; i++ ) {
        int nodoInicial, nodoFinal;
        cin>>nodoInicial>>nodoFinal;
        grafo[nodoInicial].push_back(nodoFinal);
    }
    // Puede servir para ver si desde un nodo A puede llegar a un nodo B
    int A,B; 
    cin>>A>>B;
    dfs(A);
    if(vis[B]) { 
        cout<<"Si lo podria conocer"<<endl;
    } else {
        cout<<"No lo podria conocer"<<endl;
    }
}