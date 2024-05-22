#include <iostream>

using namespace std;

//declaro dos string globales
string text, apoyo;

void reverse(int n){
    //este if funciona para parar la recursividad y no se haga un ciclo infinito
    if(n<apoyo.length()-1){
        //llama la funcion cada vez añadiendo 1 a n para ir recorriendo el string
        reverse(n+1);
    }
    //guarda lo que ya tenga el string text con un caracter de la variable apoyo
    //esto funciona gracias a que con la recursividad se va creando una pila de tareas
    //que aun no se realizan y cuando n llega al final de la variable apoyo estas tareas
    //se ejecutan de forma que se guarda primero el caracter final hasta el inicio
    text=text+apoyo[n];
}

int main()
{
    //toma el input del usuario y lo guarda en el string apoyo
    getline(cin,apoyo);
    //llama la funcion
    reverse(0);
    //imprime la variable text que contiene el input del usuario invertido
    cout<<text;
    return 0;
}

/*¿Por qué llamo la función con un entero? La respuesta de esto es que ya que uso recursividad, se va creando una pila de tareas
pendientes las cuales se realizan correctamente gracias a que 'n' esta incluido en la función y no como una variable global.
Sí cambiara 'n' a una variable global, la linea 18 que se ejecuta después de las llamadas recursivas solo me guardaria siempre el
caracter 'n' en vez de regresar 'n' a su valor original de cuando se ejecuto esa llamada.*/
