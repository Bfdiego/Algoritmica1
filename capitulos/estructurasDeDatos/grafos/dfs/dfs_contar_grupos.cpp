#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grafo[10000];

void dfs(int nodoInicial) {
    stack<int> pilita;
    pilita.push(nodoInicial);
    while (!pilita.empty()) {
        int nodoActual = pilita.top();
        pilita.pop();
        if (!vis[nodoActual]) {
            vis[nodoActual] = true;
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
    int nroNodos, nroAristas;
    cin >> nroNodos >> nroAristas;
    for (int i = 0; i < nroAristas; i++) {
        int nodoInicio, nodoFinal;
        cin >> nodoInicio, nodoFinal;
        grafo[nodoInicio].push_back(nodoFinal);
        grafo[nodoFinal].push_back(nodoInicio);
    }

    int cantGrupos;
    for (int i = 1; i <= nroNodos; i++) {
        if (!vis[i]) {
            cantGrupos++;
            dfs(i);
        }
    } 
    return 0;
}
