#include <iostream>
#include <ctime>

using namespace std;

int first_digit(int n){
    //se checa si n es conformado por solo 1 dígito, sí no lo es se vuelve a llamar la función con n/10
    if(n>10){
        return first_digit(n/10);
    } else {
        //cuando n sea un solo dígito será siempre el primer dígito de n y es lo que regresará
        return n;
    }
}

int last_digit(int n){
    //para sacar el último dígito es muy sencillo, solo tienes que tomar el residuo de la división de n/10
    return n%10;
}

int digits(int n){
    //para sacar la cantidad de dígitos en n uso un loop for donde mientras n no sea 0 voy a seguit dividiendole 10
    for(int i=1;n>0;i++){
        if(n<10){
            //cuando n sea menor a 10, solo tengo que expulsar cuantas veces dividí n sobre 10 osea i. También como empezécon i=1 esto también cuenta el último dígito que queda
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
