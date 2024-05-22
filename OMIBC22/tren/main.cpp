#include <iostream>

using namespace std;

int total=0;
int costos[50][50];
int minimos[50]={0};
int estaciones;
int cantidadCostos;

int minCost(int n){
    int minimo=costos[n][0];

    for(int i=0;i<cantidadCostos && i<n;i++){
        minimo=min(minimo,costos[n][i]);
    }

    minimos[n]=minimo;//extra
    total+=minimo;
    if(n<estaciones-1){
        return minCost(n+1);
    }else{
        return total;
    }
}

int main()
{
    cin>>estaciones>>cantidadCostos;
    for(int i=0;i<estaciones;i++){
        for(int j=0;j<cantidadCostos;j++){
            cin>>costos[i][j];
        }
    }
    cout<<minCost(0);
    //extra
    cout<<endl;
    for(int i=0;i<estaciones;i++){
        cout<<minimos[i]<<" ";
    }
    return 0;
}
