#include <iostream>
#include <ctime>

using namespace std;

int first_digit(int n){
    //se checa si n es conformado por solo 1 d�gito, s� no lo es se vuelve a llamar la funci�n con n/10
    if(n>10){
        return first_digit(n/10);
    } else {
        //cuando n sea un solo d�gito ser� siempre el primer d�gito de n y es lo que regresar�
        return n;
    }
}

int last_digit(int n){
    //para sacar el �ltimo d�gito es muy sencillo, solo tienes que tomar el residuo de la divisi�n de n/10
    return n%10;
}

int digits(int n){
    //para sacar la cantidad de d�gitos en n uso un loop for donde mientras n no sea 0 voy a seguit dividiendole 10
    for(int i=1;n>0;i++){
        if(n<10){
            //cuando n sea menor a 10, solo tengo que expulsar cuantas veces divid� n sobre 10 osea i. Tambi�n como empez�con i=1 esto tambi�n cuenta el �ltimo d�gito que queda
            return i;
        } else {
            n=n/10;
        }
    }
}

int main()
{
    //randomiza el valor de n
    srand(time(0));
    int n=1+rand()%1000000;
    //imprime n para que el usuario lo pueda ver
    cout<<n<<endl;
    //llama e imprime lo que resulten de las 3 funciones
    //a.
    cout<<first_digit(n)<<endl;
    //b.
    cout<<last_digit(n)<<endl;
    //c.
    cout<<digits(n);
    return 0;
}
