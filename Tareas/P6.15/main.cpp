#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void flood_map(double heights[10][10], double water_level){
    //funci�n para checar si el valor es menor que el agua para imprimirlo como undido en ese caso
    cout<<"El nivel del agua es: "<<water_level<<endl;
    for(int i=0,j=0;j<10;i=i){
        if(i%10==0 && i!=0){
            j++;
            i=0;
            cout<<endl;
        } else {
            if(heights[j][i]<=water_level){
                cout<<"*";
            } else {
                cout<<" ";
            }
            cout<<" ";
            i++;
        }
    }
}

int main()
{
    srand(time(0));
    double max=0,min=1000,apoyo,rango,nivel;
    double heights[10][10];
    //genero valores aleatoreos para cada espacio del arreglo y guardo el m�s bajo y alto
    for(int i=0,j=0;j<10;i=i){
        if(i%10==0 && i!=0){
            j++;
            i=0;
        } else {
            apoyo=10+rand()%1000+1-10;
            if(apoyo<min){
                min=apoyo;
            }
            if(apoyo>max){
                max=apoyo;
            }
            heights[j][i]=apoyo;
            i++;
        }
    }
    //resto el valor m�s alto con el m�s bajo para obtener la diferencia y la divido sobre 10 para que despu�s de sumarselo al minimo 100 veces llegue al m�ximo
    rango=(max-min)/10;
    nivel=min;
    //llamo la funci�n de imprimir el mapa 10 cada vez sumandole al nivel del agua
    for(int i=0;i<=10;i++){
        cout<<"Evolucion: "<<i<<" "<<endl;
        flood_map(heights,nivel);
        nivel=nivel+rango;
    }
    return 0;
}
