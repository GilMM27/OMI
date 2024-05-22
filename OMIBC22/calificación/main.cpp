#include <bits/stdc++.h>

using namespace std;

#define MAX 500

#define libre 0
#define agua 1
#define bloqueo 2
#define fuente 3

int F, L;
int n, m, mapa[MAX + 2][MAX + 2], visitado[MAX + 2][MAX + 2];
int dfil[4], dcol[4];
string s;
queue<pair<int, int> > q;

int cuentaAgua(int fil, int col){
    int res = 0;
    for(int d = 0; d < 4; ++d){
        if (mapa[fil + dfil[d]][col + dcol[d]] & agua) ++res;
    }
    return res;
}

int main()
{
    // LEE LA ENTRADA
    ifstream f("caso.out");
    f >> n >> m;
    for(int fil = 0; fil < n; ++fil){
        f >> s;
        for(int col = 0; col < m; ++col){
            if(s[col] == '#') mapa[fil][col] = bloqueo;
            else if(s[col] == '.') mapa[fil][col] = libre;
            else mapa[fil][col] = fuente;
        }
    }

    // INICIALIZA LOS DESPLAZAMIENTOS PARA NAVEGAR EL MAPA
    dfil[0] = dfil[1] = dcol[2] = dcol[3] = 0;
    dfil[2] = dcol[0] = 1;
    dfil[3] = dcol[1] = -1;

    // LLENA LA COLA CON TODAS LAS CASILLAS QUE SE LLENAN
    // DE AGUA INMEDIATAMENTE
    for(int fil = 0; fil < n; ++fil){
        for(int col = 0; col < m; ++col){
            if(!visitado[fil][col] && mapa[fil][col] == libre){
                if(cuentaAgua(fil, col) >= 2){
                    visitado[fil][col] = 1;
                    q.push({fil, col});
                }
            }
        }
    }

    // SIMULA EL LLENADO DE AGUA
    while(!q.empty()){
        // OBTEN EL ELEMENTO AL FRENTE DE LA COLA Y SACALO.
        int fil = q.front().first;
        int col = q.front().second;
        q.pop();

        mapa[fil][col] = agua; // MARCALO COMO QUE SE LLENA DE AGUA

        // VALIDA SUS 4 VECINOS
        for(int d = 0; d < 4; ++d){
            int nf = fil + dfil[d];
            int nc = col + dcol[d];
            if (!visitado[nf][nc] && mapa[nf][nc] == libre && cuentaAgua(nf, nc) >= 2){
                visitado[nf][nc] = 1;
                q.push({nf, nc});
            }
        }
    }

    // FINALMENTE PROCESA EL COSTO
    cout << n << " " << m << "\n";
    for(int fil = 0; fil < n; ++fil){
        for(int col = 0; col < m; ++ col){
            if (mapa[fil][col] == fuente){
                ++F;
                cout << 'F';
            }
            else if (mapa[fil][col] == libre){
                ++L;
                cout << '.';
            }
            else if (mapa[fil][col] == bloqueo) cout << '#';
            else cout << '-';
        }
        cout << "\n";
    }
    cout << "Fuentes = " << F << "\n";
    cout << "Espacios sin llenar = " << L << "\n";
    cout << "Costo total = " << F + 2 * L << "\n";


    return 0;
}
