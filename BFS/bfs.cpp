#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grafo[10000];
int niveles[10000];
void bfs (int nodoInicial) {
    queue<int> colita;
    colita.push(nodoInicial);
    niveles[nodoInicial] = 0;
    while(!colita.empty()){ // Verificar si el queue esta vacio
        int nodoActual = colita.front(); // Obtener el primer elemento del queue
        colita.pop();
        if(!vis[nodoActual]) {
            vis[nodoActual] = true; // Marcando como visitado al nodo actual 
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){
                int amigo = grafo[nodoActual][i]; // vecino
                niveles[amigo] = niveles[nodoActual] + 1;
                if(!vis[amigo]) { // Verificar si su vecino fue visitado
                    colita.push(amigo);
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
    // Si el nodo S puede llegar al nodo T
    int S,T; 
    cin>>S>>T;
    bfs(S);
    if(vis[T]) { 
        cout<<"Si lo podria conocer"<<endl;
    } else {
        cout<<"No lo podria conocer"<<endl;
    }
}