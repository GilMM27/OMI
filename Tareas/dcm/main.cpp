#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

long long x;

long long dmc(long long a, long long b){
    //esta función encuentra el dmc checando sí a y b son divisibles entre un dado número
    if(a%x==0 && b%x==0){
        //sí lo es me regresa ese valor
        return x;
    } else {
        if(x==0){
            //sí por cualquier razón llego a 0 y no lo encontro significaria que no hay dmc (caso de error)
            return 0;
        }
        //sí el valor que se esta provando no es el dmc entonces se vuelve a llamar la función con otro valor
        x--;
        dmc(a,b);
    }
}

int main()
{
    //randomizo los valores de a y b
    srand(time(0));
    long long a, b;
    a=50+rand()%51;
    while(b>=a){
        b=10+rand()%91;
    }
    //dejo al usuario saber cuales son los valores random de a y b
    cout<<a<<" "<<b<<endl;
    //llamo la función primero para sacar el dmc de a y b
    x=a;
    cout<<dmc(a,b)<<endl;
    //ahora llamo la función para sacarlo con b y a mod b
    x=b;
    cout<<dmc(b,a%b);

    return 0;
}
