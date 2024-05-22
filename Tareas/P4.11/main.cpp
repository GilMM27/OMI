#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    srand(time(0));
    //declaración de variables
    float pi = 3.1415169;
    float h,a,h2;
    float resultado,hit=0;
    //repite el experimento 10000 veces
    for(int i=0;i<10000;i++){
        //determina la primera altura con un número random con 2 decimales del 0 al 2
        h=float(rand()%(200+1))/100;
        //determina el ángulo con un número random del 0 al 180
        a=rand()%(180+1);
        //convierte el ángulo a radianes
        a=a*pi/180;
        //suma la altura inicial con la altura a la que llega la aguja encontrando la altura definitiva
        h2=h+sin(a);
        //determina si la altura definitiva es mayor o igual a 2 para marcar si esta tocando la linea o no en este caso
        if(h2>=2){
            hit++;
        }
    }
    //entrega el resultado de 10000 dividido sobre las veces que la aguja toco la linea
    resultado=10000/hit;
    cout<<resultado;

    return 0;
}
