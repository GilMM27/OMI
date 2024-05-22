#include <iostream>
#include <cmath>

using namespace std;

int d, n, vuelta=1, vueltas;
int nums[10000000];

void dados(){
    int i=0;
    //apartir de ciclos a�idados le asigno el valor del 1 a 'd' en el arreglo las veces necesarias
    for(int j=0;j<pow(d,n-1);j++){
        for(int h=0;h<d;h++){
            nums[h+i]=nums[h+i]+(h+1);
        }
        //llevo cuenta de la cantidad de veces que he pasado este �ltimo ciclo porque si no siempre estar�a modificando los mismos espacios del arreglo
        i=i+d;
    }
}

void dados10(int multi){
    //gracias a estas variables y ciclo encuentro el valor de 'apoyo1' que me servira despues para saber cuantas veces tengo que imprimir el mismo n�mero
    int apoyo1=0, apoyo2=multi;
    while(apoyo2>=10){
        apoyo2=apoyo2/10;
        apoyo1++;
    }
    //ahora hago algo similar a la funci�n dados() pero ahora trabajo con decimas o mayores y se imprime varias veces el mismo n�mero y ese proceso se repite varias veces
    int cont=0;
    for(int h=0;h<pow(d,vueltas+1);h++){
        for(int i=1;i<=d;i++){
            for(int j=0;j<pow(d,apoyo1);j++){
                nums[j+cont]=nums[j+cont] + i*multi;
            }
            cont=cont+pow(d,apoyo1);
        }
    }
}

int main()
{
    //entro los valores y saco la cantidad de n�meros que debo calcular e imprimir
    cin>>d>>n;
    int size=pow(d,n);
    //hago que todos los espacios que voy a utilizar del arreglo sean equivalentes a 0
    for(int h=0;h<size;h++){
        nums[h]=0;
    }

    //declaro esta variable que llevara cuenta de en que decima voy
    int multi=1;
    //uso este ciclo para hacer las llamadas necesarias a las funciones
    for(int i=0;i<n;i++){
        if(i==0){
            //esta funci�n es la primera que se llama y es la que encontrara las unidades que voy a utilizar y las asignara al arreglo
            dados();
        } else {
            //llevo cuenta de las vueltas para saber la cantidad de veces que tengo que imprimir el mismo n�mero, esto se vera despu�s en la funci�n
            vueltas=n-vuelta;
            //este multi sera 10, 100, 1000, etc. para modificar los n�meros acorde a la posici�n que estoy trabajando
            int multi=pow(10,i);
            //llamo la funci�n que maneja n�meros mayores o iguales a 10
            dados10(multi);
            vuelta++;
        }
    }

    //imprime todos los n�meros
    for(int h=0;h<size;h++){
        cout<<nums[h]<<endl;
    }

    return 0;
}
