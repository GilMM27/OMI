#include <iostream>

using namespace std;

bool find(string s, string t){
    int x=0;
    //con un loop checo si el inicio del string s coincide con el t, hago esto checando
    //caracter por caracter y sumando 1 a una variable de apoyo en los casos correctos
    for(int i=0;i<t.length();i++){
        if(s[i]==t[i]){
            x++;
        }
    }
    //si es que el inicio de s es igual a t (que la variable de apoyo es igual al tamaño de t o en
    //otras palabras que todos los caracteres son iguales) entonces regreso verdadero
    if(x==t.length()){
        cout<<"true"<<endl;
        return true;
    //en el caso contrario checo si t todavia cabe en s y continuo buscando
    } else if(s.length()>=t.length()){
        string apoyo;
        //con este loop guardo los caracteres de s menos el primero en una variable de apoyo
        for(int i=1;i<s.length();i++){
            apoyo=apoyo+s[i];
        }
        //ahora vuelvo a llamar la funcion con el cambio de que ahora uso la variable de apoyo
        find(apoyo, t);
    } else {
        cout<<"false"<<endl;
        //si nunca se encuentra regresa falso
        return false;
    }
}

int main()
{
    string text, objective;
    cin>>text>>objective;
    bool b = find(text,objective);

    return 0;
}
