#include <iostream>

using namespace std;

int main()
{
    int x,h,m,s;
    char b;
    long long a=0;
    cin>>x;
    int n[x][2];
    int max=0,max2=0;
    char seats[8];
    /* En estos ciclos se ingresa las horas como un arreglo de caracteres y después se seleccionan
    manualmente los caracteres para convertirlos a formato int, una vez hecho esto se convierten
    las horas y minutos en segundos y se guardan en otro arreglo*/
    for(int i=0;i<x;i++){
        for(int j=0;j<2;j++){
            for(int i=0;i<8;i++){
                cin>>seats[i];
            }
            h=seats[0]-'0';
            h=h*10;
            h=h+seats[1]-'0';
            h=h*3600;
            m=seats[3]-'0';
            m=m*10;
            m=m+seats[4]-'0';
            m=m*60;
            s=seats[6]-'0';
            s=s*10;
            s=s+seats[7]-'0';
            n[i][j]=h+m+s;
        }
    }
    /*
    se toma cada hora a la que una persona llega y se compara si es mayor a la
    hora que llegaron todos los demás y menor a la que se fueron
    entonces se va sumando cuantas personas coincidieron con la hora que llego una persona y se guarda en un valor
    para después guardarlo en otro si es que fue el mayor hasta el momento
    */
    for(int i=0;i<x;i++){
        max=0;
        for(int j=0;j<x;j++){
            if(n[i][0]>=n[j][0] && n[i][0]<=n[j][1]){
                max++;
            }
        }
        if(max>max2){
            max2=max;
        }
    }
    //imprime el valor más alto de personas al mismo momento
    cout<<max2;

    /*EXPLICACION:
    lo que hago para resolver este problema es tomar los caracteres de las horas, separarlos y convertirlos a números
    para finalmente calcular los segundos que representa cada hora.
    Para ver cuando los horarios de las personas coinciden comparo los horarios en los que llego cada quien con
    los horarios que llegaron y se fueron los demas, hago esto con cada uno de los horarios de llegada y guardo
    cuantos estaban en ese momento para guardar en otra variable el numero mas grande.*/
    return 0;
}
