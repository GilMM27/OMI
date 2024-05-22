#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int n=0,maxx;

int maximun(vector<int> values){
    //uso 'n' para saber en que valor del arreglo vamos y para no pasarnos
    if(n<10){
        //uso una variable de apoyo 'maxx' para ir guardando el valor m�s grande hasta el momento
        //por lo que checo s� el �ltimo valor m�s grande es menor al que se esta checando
        if(maxx<values[n]){
            //s� lo es, entonces ese es el nuevo valor m�s grande
            maxx=values[n];
        }
        //sumo 1 a'n' para ahora checar el siguiente valor
        n++;
        //llamo la funcion otra vez con 'values' pero ahora 'n' cambio
        return maximun(values);
    }
    //s� ahora 'n' es mayor a 10 significa que ya termino de checar todos los valores y solo me va a regresar el valor m�s grande
    return maxx;
}

int main()
{
    srand(time(0));
    vector<int> nums;
    //le asigno n�meros random del 1 al 100 al vector
    for(int i=0;i<10;i++){
        nums.push_back(1+rand()%100);
        //los imprimo para que el usuario los pueda ver
        cout<<nums[i]<<" ";
    }
    //llamo e imprimo la funci�n de maximus con el vector
    cout<<endl<<maximun(nums);

    return 0;
}
