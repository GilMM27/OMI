#include <iostream>

using namespace std;
//declaro n para llevar cuenta de la cantidad de caracteres que debo imprimir
//declaro vuelta para saber si he terminado con todos los substrings que empiezan con la misma letra
int n=1,vuelta=0;

void generate_substrings(string s){
    //checo si n no ha terminado de imprimir todos los substrings que empiezan con una letra
    //le resto 'vuelta' porque cada vuelta el string se va recorriendo por lo que se hace más pequeño el tamaño que ocupa la palabra
    if(n!=1+s.length()-vuelta){
        //imprimo el substring
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;
        //sumo 1 a n para que la siguiente vuelta imprima una letra más que en la anterior
        n++;
        generate_substrings(s);
    //si ya termine de imprimir todos los substrings de una vuelta, checo si aun faltan vueltas (letras con la que inician los substrings) para continuar
    } else if(vuelta!=s.length()){
        //regreso n al valor de 1 para volver a imprimir solo un caracter
        n=1;
        //recorro el string de forma que mi primer caracter sea el segundo y asi hasta el final
        for(int i=0;i<s.length()-vuelta;i++){
            s[i]=s[i+1];
        }
        //sumo 1 a vuelta y vuelvo a llamar la función con ya con el string recorrido
        vuelta++;
        generate_substrings(s);
    }
}

int main()
{
    string text;
    cin>>text;
    generate_substrings(text);
    return 0;
}
