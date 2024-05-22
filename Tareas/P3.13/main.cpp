#include <iostream>

using namespace std;

int main()
{
    //declaración y lectura de variables
    double a;
    cin>>a;

    //en todos estas decisiones se checa si el numero es mayor a cierto valor, si lo es se imprime ese valor en numero romano y se resta esa cantidad
    //en algunos casos uso loops porque puede haber mil (en este ejemplo) más de una vez en el valor
    while(a>1000){
        cout<<"M";
        a=a-1000;
    }
    if(a>=900){
        cout<<"CM";
        a=a-900;
    } else if(a>=500){
        cout<<"D";
        a=a-500;
    }
    if(a>=400){
        cout<<"CD";
        a=a-400;
    } else {
        while(a>=100){
            cout<<"C";
            a=a-100;
        }
    }
    if(a>=90){
        cout<<"XC";
        a=a-90;
    } else if(a>=50){
        cout<<"L";
        a=a-50;
    }
    if(a>=40){
        cout<<"XL";
        a=a-40;
    } else {
        while(a>=10){
            cout<<"X";
            a=a-10;
        }
    }
    if(a>=9){
        cout<<"IX";
        a=a-9;
    } else if(a>=5){
        cout<<"V";
        a=a-5;
    }
    if(a>=4){
        cout<<"IV";
        a=a-4;
    } else {
        while(a>=1){
            cout<<"I";
            a=a-1;
        }
    }

    return 0;
}
