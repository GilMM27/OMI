#include <iostream>

using namespace std;
//ESTE PROGRAMA DEBE FUNCIONAR HASTA CON 5 VERTICES s� es m�s de eso no encontre una formula para continuar

int vertices;
//declaro un arreglo de 2 dimensiones para guardar las coordenadas x, y de cada vertice
int co[1000][2];
//declaro estas 3 variables para saber que coordenadas voy a usar
int a=0,b=1,c=2;
//uso la variable x para saber la cantidad de tri�ngulos que se han calculado
int x=0;

float area(int x1,int y1,int x2,int y2,int x3,int y3){
    /*esta funci�n deber�a computar la siguiente operaci�n para sacar el �rea de 1 tri�ngulo del pol�gono
    y sumarle lo que resulte de otra llamada a esta misma funci�n, pero con los valores de otras coordenadas
    y asi continuar hasta que haya calculado y sumado todas las areas de los tr�angulos.
    tengo la idea pero no encontre una forma de programar que coordenadas debo usar de manera que se lleve eso acabo de manera automatica*/
    //checo si la cantidad de tri�ngulos que se han calculado es menor a la cantidad de tri�ngulos en el pol�gono que siempre es la cantidad de lados - 2
    if(x<vertices-2){
        //modifico las coordenadas del siguente tri�ngulo por calcular AQUI ESTA EL ERROR
        a++;
        b++;
        c++;
        //s� se pasan de la cantidad de vertices las regros a 0
        if(a>=vertices){
            a=0;
        } else {
            a++;
            if(a>=vertices){
                a=0;
            }
        }
        if(b>=vertices){
            b=0;
        } else {
            b++;
            if(b>=vertices){
                b=0;
            }
        }
        if(c>=vertices){
            c=2;
        } else {
            c++;
            if(c>=vertices){
                c=0;

            }
        }
        //sumo 1 a x para saber que se ha calculado 1 tri�ngulo m�s
        x++;
        //calculo el �rea del tri�ngulo y llamo otra vez esta funci�n las nuevas coordenadas
        return (x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2)/2 + area(co[a][0],co[a][1],co[b][0],co[b][1],co[c][0],co[c][1]);
        }
    return 0;
}

int main()
{
    cout<<"ingresar la cantidad de lados: ";
    cin>>vertices;
    /*investige sobre la formula dada en el problema y encontre que las coordenadas deben ser dadas de forma antihoraria
    en caso que no sea asi el resultado sera negativo*/
    cout<<"ingresar coordenadas (x,y) de manera antihoraria: ";
    //ingreso los valores usando ciclos iterativos a�idados
    for(int i=0;i<vertices;i++){
        for(int j=0;j<2;j++){
            cin>>co[i][j];
        }
    }
    //llamo la funci�n con los valores de las coordenadas correspondientes
    cout<<area(co[a][0],co[a][1],co[b][0],co[b][1],co[c][0],co[c][1]);
    return 0;
}
