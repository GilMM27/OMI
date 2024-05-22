#include <iostream>

using namespace std;

int n=0, contrario;

bool is_palindrome(string str){
    /*sí 'n', que es nuestra guia para saber en que caracter vamos, aun no llega a la mitad del string
    debemos continuar checando si las letras son iguales. Checar sí es menor que la mitad funciona con
    cantidades de caracteres en el string pares e impares ya que en pares tenemos que comparar todos los caracteres
    y en impares el caracter del medio no lo tenemos que comparar*/
    if(n<str.length()/2){
        //checo sí el caracter del string en la posición 'n' es igual la posición de una variable que se encuentra del otro lado
        if(str[n]==str[contrario]){
            //sí lo es acerco estas variables al centro del string 1 espacio y vuelvo a llamar la función
            n++;
            contrario--;
            return is_palindrome(str);
        } else {
            //en caso que esos caracteres no sean iguales regresare falso terminando la función
            return false;
        }
    }
    //sí termine de checar todos los caracteres y nunca se fue a regresar falso, entonces la respuesta debe ser verdadero
    return true;
}

int main()
{
    string text;
    cin>>text;
    //uso esta variable para comparar un caracter con el caracter del lado contrario durante la función
    contrario=text.length()-1;
    //llamo la función y la guardo en una variable
    bool check = is_palindrome(text);
    //finalmente le comunico al usuario cual fue el resultado de la función
    if(check==true){
        cout<<"true";
    } else {
        cout<<"false";
    }
    return 0;
}
