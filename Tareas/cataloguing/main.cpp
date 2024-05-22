#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a[3][2];
    int mes, dia, ano, dig8, dig9, max, x=0, x2=0;
    bool leap=false;
    cin>>a[0][0]>>a[1][0]>>a[2][0];
    a[0][1]=1;
    a[1][1]=1;
    a[2][1]=1;

    int maxdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i=0;i<3;i++){
        //separa el numero de dia en la variable 'dia' y en 'mes' el numero de mes
        ano=(a[i][0]/100)%1000;
        mes=(a[i][0]/100000)%100;
        dia=a[i][0]/10000000;
        //guarda en max la cantidad de días en el mes
        max=maxdays[mes];
        //checa si el número de mes es válido
        if(mes<1 || mes>12){
            a[i][1]=0;
        }
        //checa si el año es válido
        if(ano>1000){
            a[i][1]=0;
        }
        //checa si el año es bisisto para cambiar el máximo de días de febrero
        if(mes==2){
            if(ano<=599){
                ano=ano+2000;
            } else {
                ano=ano+1000;
            }
            if(ano%4==0 && ano%100!=100){
                max=29;
            } else if(ano%4==0 && ano%400==0){
                max=29;
            }
        }
        //checa si el dia es válido
        if(dia<1 || dia>max){
            a[i][1]=0;
        }

        dig8=(a[i][0]/10)%10;
        dig9=a[i][0]%10;
        //checa si el 8vo dígito es válido
        if(dig8!=1 && dig8!=6 && dig8!=9){
            a[i][1]=0;
        }
        //checa si el 9no dígito es correcto
        x=pow(a[i][0]/100000000,2);
        x2=a[i][0]%100000000;
        x=x+pow(x2/10000000,2);
        x2=x2%10000000;
        x=x+pow(x2/1000000,2);
        x2=x2%1000000;
        x=x+pow(x2/100000,2);
        x2=x2%100000;
        x=x+pow(x2/10000,2);
        x2=x2%10000;
        x=x+pow(x2/1000,2);
        x2=x2%1000;
        x=x+pow(x2/100,2);
        x2=x2%100;
        x=x+pow(x2/10,2);
        x=x%7;
        if(dig9!=x){
            a[i][1]=0;
        }
    }
    //imprime los resultados
    for(int i=0;i<3;i++){
        cout<<a[i][1]<<endl;
    }
    /*para este problema simplemente es introducir las tres sequencias de digitos, separarlos y
    checar si cada uno sigue las reglas dadas por el problema.
    cree un arreglo de dos dimensiones para poder guardar el numero y si ese numero esta correcto o no.
    inicio con este última variable mencionada en 1, pero sí una de las pruebas del número sale incorrecta cambio este valor a 0*/
    return 0;
}
