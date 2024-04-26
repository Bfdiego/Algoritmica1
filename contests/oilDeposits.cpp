#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

vector<string> soil(102);
bool vis[102][102];
int vx[] = {-1,1,0,0,-1,-1,1,1};
int vy[] = {0,0,1,-1,1,-1,1,-1};
int oildeposits;

void dfs(int fila, int columna,int x,int y) {
    vis[fila][columna] = true;
    for (int i = 0; i < 8; i++) {
        int nuevaFila = fila+vx[i];
        int nuevaColumna = columna+vy[i];
        if (nuevaFila>=0 && nuevaFila<=x-1 && nuevaColumna>=0 && nuevaColumna<=y-1 && soil[nuevaFila][nuevaColumna] == '@') {
           if (!vis[nuevaFila][nuevaColumna]) {
                dfs(nuevaFila,nuevaColumna,x,y); 
            }
        } 
    }
}

int main() {
    input;
    output;
    int filas, columnas;
    while (cin>>filas>>columnas && filas && columnas) {
        for (int i = 0; i < filas; i++) {
            cin>>soil[i];
        } 
        int oildeposits = 0;
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                if (!vis[i][j] && soil[i][j] =='@') {
                    dfs(i,j,filas,columnas);
                    oildeposits++;
                }   
            }   
    }
    cout << oildeposits << endl;
    memset(vis, false, sizeof(vis));
    }
    return 0;
}