#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q, n;
    cin>>q>>n;
    long long fila_carros[n];
    long litros;

    //Llenado y suma de la fila de carros
    cin>>fila_carros[0];
    for (int i=1; i<n; i++)
    {
        cin>>fila_carros[i];
        fila_carros[i] += fila_carros[i-1];
    }


    //Resolución del problema por búsqueda binaria
    int inicio = 0;
    int fin = n;
    int mitad = (inicio + fin)/2;

    for (int i=0; i<q; i++)
    {
        cin>>litros;
        inicio = 0;
        fin = n;
        mitad = (inicio + fin)/2;

        while (fin-inicio >= 2)
        {
            if ( fila_carros[mitad] <= litros )
            {
                inicio = mitad;
            }
            else
            {
                fin = mitad;
            }
            mitad = (inicio + fin)/2;
        }
        //clientes satisfechos y litros restantes
        if (fila_carros[0]>litros)
        {
            cout<<0<<" "<<litros<<"\n";
        }
        else if (fila_carros[fin] <= litros)
        {
            cout<<fin+1 <<" "<<litros-fila_carros[fin]<<"\n";
        }
        else
        {
            cout<< inicio+1 <<" "<< litros-fila_carros[inicio]<<"\n";
        }
    }
}
