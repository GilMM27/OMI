#include <iostream>

using namespace std;

//declaro dos string globales
string apoyo, text;

string reverse(int n, string str){
    apoyo="";
    //este if funciona para parar la recursividad y no se haga un ciclo infinito
    if(n<str.length()){
        /*regresa una llamada de la funcion cada vez añadiendo 1 a n para ir recorriendo el string
        también suma a esto el caracter de n y como se añade después de la llamada recursiva
        esta tarea quedara pendiente y como empeze con n=0 y le ire sumando entonces cuando se realizen las
        tareas pendientes se realizara la última primero por lo que la palabra quedara invertida*/
        return reverse(n+1,str) + str[n];
    }
    //cuando sea la última letra no entrara al if por lo que requiero llamarla aqui para terminar la recursividad
    return str[n]+"";
}

//'start' me guardara donde debe iniciar cada substring y se ira actualizando cada vez que termine uno
int start=0;
//substring me guardara el string que enviare a la funcion reverse
string substring;

void divide(int n){
    substring="";
    //checo sí 'n' es un espacio, sí lo es significa que 'n' es el final de la última palabra en 'text'
    if(text[n]==' '){
        //uso un ciclo for que va desde uno más del final de la última palabra hasta el final de esta nueva
        for(int i=start;i<n;i++){
            //guardo los caracteres en 'substring'
            substring=substring+text[i];
        }
        //llamo la función reverse con este substring e imprimo lo que regrese añadiendo un espacio al final de la palabra
        cout<<reverse(0,substring)<<" ";
        //actualizo start a el final de la última palabra + 1
        start=n+1;
    //sí 'n' llega al final de 'text' significa que termina la última palabra y tengo que hacerlo en un if porque al final del texto no hay un espacio
    } else if(n==text.length()-1){
        for(int i=start;i<n+1;i++){
            substring=substring+text[i];
        }
        cout<<reverse(0,substring)<<" ";
    }
    //hago la llamada recursiva mientras aun queden caracteres por checar
    if(n<text.length()){
        //sumo 1 a n para continuar recorriendo el string de 'text'
        divide(n+1);
    }
}

int main()
{
    //toma el input del usuario y lo guarda en el string text
    getline(cin,text);
    //llama la funcion que encuentra los substrings
    divide(0);

    return 0;
}
