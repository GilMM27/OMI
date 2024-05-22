#include <iostream>

using namespace std;

int n=0;

string reverse(string str){
    //checo s� n es menor a la longitud del string para saber si aun tengo que invertir caracteres
    if(n<str.length()){
        //sumo 1 a n para avanzar en el string
        n++;
        /*regreso una llamada recursiva de reverse y le sumo el caracter actual, como se lo sumo despu�s de la llamada
        se me quedara como una tarea pendiente por lo que este primer caracter sera el �ltimo en ser sumado*/
        return reverse(str) + str[n-1];
    } else {
        //regreso un espacio en blanco si ya no hay caracteres por usar
        return "";
    }
}

int main()
{
    string text;
    cin>>text;
    cout<<reverse(text);
    return 0;
}
