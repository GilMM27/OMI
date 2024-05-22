#include <iostream>

using namespace std;
/*uso estas dos variables de apoyo para checar el límite de una linea con iterador
y el inicio de esta misma con iterador 2*/
int iterador=0, iterador2=0;
/*
caso que use de prueba:
Write a program that reads words and arranges them in a paragraph so that all lines other than the last one are exactly forty characters long. Add spaces between words to make the last word extend to the margin. Distribute the spaces evenly. Use a helper function for that purpose. A typical output would be:
*/
void espacios(string str){
    //encuentro la cantidad de espacios que tengo que añadir para que la linea sea de 40 caracteres
    int diferencia=(40+iterador2)-iterador;
    /*para insertar los caracteres avanzo por la linea buscando espacios, si encuentro uno recorro el string para que asi
    se duplique el espacio que tenia. sí termina de recorrer la linea y aun no llega a los 40 caracteres se realiza otra vuelta pero ahora
    como van a haber 2 espacios cada vez en vez de 1, cuando encuentre uno ahora no tendre que ignorar solo el espacio siguiente, sino que
    los dos espacios siguientes, por eso le sumo 'vuelta' a 'i' y llevo cuenta de cuantas vueltas de han realizado*/
    int vuelta=1;
    //checo si quedan espacios por instertar
    while(diferencia>0){
        //recorro la linea caracter por caracter
        for(int i=iterador2;i<iterador;i++){
            //si encuentro un espacio y aun tengo espacios por insertar prosigo
            if(str[i]==' ' && diferencia>0){
                //recorro el string copiando el caracter de la izquierda y llegando hasta la derecha del espacio
                for(int j=str.length()-1;j>i;j--){
                    str[j]=str[j-1];
                }
                //registro que ya inserte 1 espacio más
                diferencia--;
                //me salto 'vuelta' para no checar el espacio que acabo de insertar más los que ya estaban
                i=i+vuelta;
            }
        }
        //sumo uno a vuelta porque significa que ya termine un recorrido por la linea
        vuelta++;
    }
    //finalmente imprimo los caracteres de la linea de 40 caracteres
    for(int i=iterador2;i<40+iterador2;i++){
        cout<<str[i];
    }
    //ahora el inicio de la siguiente linea sera el final de la última más 1
    iterador2=iterador+1;
    //imprimo un salto de linea para que el usuario pueda ver que la linea termino
    cout<<endl;
}

void dividir(string str){
    /*primero checo sí aun hay más de dos lineas en el string
    hago esto checando sí aun caben más de 40 caracteres entre el caracter de la última
    linea y el tamaño del string*/
    if(str.length()>iterador+40){
        int apoyo;
        /*con un ciclo for que empieza desde el final de la última linea, busco el espacio más pegado al final
        en los siguientes 40 caracteres del string*/
        for(int i=iterador;i<40+iterador;i++){
            if(str[i]==' '){
                apoyo=i-iterador2;
            }
        }
        //después guardo la ubicación de ese espacio osea el final de la linea
        iterador=iterador+apoyo;
        //y llamo la función para que le añada espacios extra para que sea exactamente 40 caracteres y la imprima
        espacios(str);
        //le sumo 1 a el final de la linea para que se convierta en el inicio de la siguiente
        iterador++;
        //vuelvo a llamar esta función
        dividir(str);
    } else {
        //en caso que solo haya una linea restante solo imprimo cada caracter de esa linea hasta el final del string
        for(int i=iterador2;i<str.length();i++){
        cout<<str[i];
        }
    }
}

int main()
{
    string text;
    getline(cin,text);
    dividir(text);
    return 0;
}
