#include <iostream>

using namespace std;

int main()
{
    //declaración de variables
    char a;
    double palabras=0, x=0, promedio=0;

    cout<<"Escribe el texto. Escribe los espacios entre las palabras como '_' y termina el proceso escribiendo '/' y dando ENTER"<<endl;
    //loop que esta activo hasta que se introduzca '/'
    while(a!='/'){
        //se ingresa la letra de cada palabra
        cin>>a;
        //se checa sí la letra es un punto, en ese caso significa que termino una oración y se suma al contador la última palabra escrita
        if(a=='.'){
            palabras++;
            x++;
        //se checa sí la letra es un espacio, en ese caso significa que acaba de terminar una palabra y se suma al contador
        } else if(a=='_'){
            palabras++;
        }
    }
    //saca el promedio dividiendo la cantidad total de palabras sobre el numero de oraciones
    promedio=palabras/(x);
    cout<<promedio;
    return 0;
}
