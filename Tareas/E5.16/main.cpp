#include <iostream>

using namespace std;

int Zellers_congruence(int year, int mm, int d){
    //realizo la operación y regreso el resultado
    return (d + 5 + (26*(mm+1))/10 + (5*(year%100))/4 + (21*(year/100))/4)%7;
}

int main()
{
    int year, month, d;
    cin>>year>>month>>d;
    //el valor de mes solo se modifíca sí es enero o febrero, en otro caso se deja igual
    if(month==1){
        month=13;
    } else if(month==2){
        month=14;
    }
    //llamo la función con los valores correspondientes e imprimo el resultado
    cout<<Zellers_congruence(year,month,d);

    return 0;
}
