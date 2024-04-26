#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grafo[10000];
int niveles[10000];
vector<int> nodes[1];
void bfs (int nodoInicial) {
    queue<int> colita;
    colita.push(nodoInicial);
    niveles[nodoInicial] = 0;
    while(!colita.empty()){ 
        int nodoActual = colita.front(); 
        bool found = false;
        for (int i = 0; i < nodes[0].size(); i++) {
            if (nodes[0][i] == nodoActual) {
                found = true;
            }
        }

        if (!found) {
            nodes[0].push_back(nodoActual);
        }
        
        colita.pop();
        if(!vis[nodoActual]) {
            vis[nodoActual] = true; 
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){
                int amigo = grafo[nodoActual][i]; 
                niveles[amigo] = niveles[nodoActual] + 1;
                if(!vis[amigo]) { 
                    colita.push(amigo);
                } 
            }   
        }
    }
}


int main() {
    input;
    output;
    int numberPairs;
    int a = 1;
    while (cin>>numberPairs && numberPairs) {
        grafo->clear();
        for(int i = 0 ; i < numberPairs; i++) {
            int nodoInicial, nodoFinal;
            cin>>nodoInicial>>nodoFinal;
            if (nodoInicial != nodoFinal) {
                grafo[nodoInicial].push_back(nodoFinal);
            } 
        }
        
        int initialNode,ttl; 
        
        while (cin >> initialNode >> ttl && initialNode) {
            memset(niveles,0,10000);
            memset(vis,false,10000);
            bfs(initialNode);
            int nodesNot = 1;
            for (int i = 0; i < 10000; i++) {
                if (niveles[i] < ttl && niveles[i] != 0) {
                    nodesNot++;
                }
            }
            int b = 0;
            b = nodes[0].size()-nodesNot;
                    
            cout << "Case " << a << ": " << b << " nodes not reachable from node " 
            << initialNode << " with TTL = " << ttl << "." << endl;
            a++;
            
        }
    }
 
    
}