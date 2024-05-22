#include <iostream>

using namespace std;

string middle(string str){
    //primero checo si la cantidad de caracteres en el string es par o impar
    if(str.length()%2==0){
        //sí es par necesitare expulsar 2 caracteres en un string juntos por lo que usare una variable de apoyo con el string original para sacar el segundo
        string apoyo=str;
        //primero encuentro el primer caracter este estando ubicado a la mitad menos 1
        str=str[str.length()/2-1];
        //después saco el segundo y lo guardo en str
        str=str+apoyo[apoyo.length()/2];
        //finalmente regreso este string
        return str;
    } else {
        //sí la cantidad de caracteres resulto ser impar entoces solo tendre que regresar el caracter que esta justo al medio
        str=str[str.length()/2+0.5];
        return str;
    }
}

int main()
{
    string str;
    cin>>str;
    cout<<middle(str);
    return 0;
}
