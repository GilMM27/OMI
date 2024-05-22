#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int visible=n*n;
    int stacks[n][n];
    int check[n][n];
    //da el valor de 0 a todos los espacios en el array de check el cual servira para saber si una casilla central ya fue vista
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            check[i][j]=0;
        }
    }
    //ingresa los valores de los stacks
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>stacks[i][j];
            if(stacks[i][j]==0 && i==0 || stacks[i][j]==0 && j==0 || stacks[i][j]==0 && i==n-1 || stacks[i][j]==0 && j==n-1){
                visible--;
            }
        }
    }
    //checa de izquierda a derecha que casillas centrales son visibles sumandole 1 al arreglo de apoyo en ese caso para saber después que esa casilla ya fue vista
    int max=0;
    for(int i=1;i<n-1;i++){
        max=0;
        for(int j=0;j<n-1;j++){
            if(stacks[i][j]>max){
                max=stacks[i][j];
                check[i][j]++;
            }
        }
    }
    //checa de abajo a arriba
    for(int i=1;i<n-1;i++){
        max=0;
        for(int j=n-1;j>1;j--){
            if(stacks[j][i]>max){
                max=stacks[j][i];
                check[j][i]++;
            }
        }
    }
    //checa de derecha a izquierda
    for(int i=1;i<n-1;i++){
        max=0;
        for(int j=n-1;j>0;j--){
            if(stacks[i][j]>max){
                max=stacks[i][j];
                check[i][j]++;
            }
        }
    }
    //checa de arriba a abajo
    for(int i=1;i<n-1;i++){
        max=0;
        for(int j=0;j<n-1;j++){
            if(stacks[j][i]>max){
                max=stacks[j][i];
                check[j][i]++;
            }
        }
    }
    //checa sí las casillas nunca fueron vistas (quedaron en 0) y las resta al total de casillas
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(check[i][j]==0){
                visible--;
            }
        }
    }
    //finalmente imprime cuantas casillas son visibles
    cout<<visible;

    /*EXPLICACION:
    Para este problema ingreso los datos en un arreglo de dos dimensiones teniendo otro arreglo igual para guardar
    sí la casilla respectiva ha sido vista o no. Para saber esto corro 4 loops, uno para cada lado, los cuales
    checan si las casillas centrales tienen un número mayor enfrente y marcan las casillas visibles.
    Después de todos los chequeos las casillas que quedan en 0 son las que nunca fueron vistas por lo que resto 1
    por cada casilla no vista o que tenia 0 libros*/
    return 0;
}
