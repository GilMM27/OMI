#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string x;
    char a;
    int n, apoyo, we=0, ns=0;
    getline(cin, x);
    //checa cada caracter del string para ver si contiene un número para después convertir ese char a int y sumarlo o restarlo
    //a la variable correcta dependiendo del último caracter registrado
    for(int i=0;i<x.length();i++){
        if(x[i]=='0' || x[i]=='1' || x[i]=='2' || x[i]=='3' || x[i]=='4' || x[i]=='5' || x[i]=='6' || x[i]=='7' || x[i]=='8' || x[i]=='9'){
            a=x[i-1];
            n=x[i]-'0';
            if(x[i+1]=='0' || x[i+1]=='1' || x[i+1]=='2' || x[i+1]=='3' || x[i+1]=='4' || x[i+1]=='5' || x[i+1]=='6' || x[i+1]=='7' || x[i+1]=='8' || x[i+1]=='9'){
                apoyo=x[i+1]-'0';
                n=n*10+apoyo;
            }
            if(a=='w'){
                we=we-n;
            } else if (a=='e'){
                we=we+n;
            } else if (a=='s'){
                ns=ns-n;
            } else if (a=='n'){
                ns=ns+n;
            }
            i++;
        }
    }
    //finalmente con las coordenadas se calcula la hipotenusa para sacar la medida de la línea recta entre
    //el punto de salida y el punto final
    cout<<sqrt(pow(we,2)+pow(ns,2));

    return 0;
}
