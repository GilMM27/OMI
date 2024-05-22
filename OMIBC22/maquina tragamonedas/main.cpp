#include <iostream>

using namespace std;

int segunda(int cuartos,int a,int b,int c){
    int jugadas=0;
    cout<<c<<endl;
    while(cuartos>0){
        jugadas+=cuartos;
        int div=cuartos/3;
        cuartos=cuartos%3;

        a+=div;
        b+=div;
        c+=div;

        int resultado=a/35;
        a=a%35;
        cuartos+=resultado*30;

        resultado=b/100;
        b=b%100;
        cuartos+=resultado*60;

        resultado=c/10;
        c=c%10;
        cuartos+=resultado*9;
        //cout<<jugadas<<" "<<cuartos<<endl;
    }
    return jugadas;
}

int main()
{
    int cuartos,a,b,c;
    cin>>cuartos>>a>>b>>c;
    cout<<segunda(cuartos,a,b,c)<<endl;
    int jugadas=0;
    while(cuartos>0){
        if(cuartos>0){
            a++;
            jugadas++;
            cuartos--;
            if(a/35>=1){
                cuartos+=30;
                a=0;
            }
        }
        if(cuartos>0){
            b++;
            jugadas++;
            cuartos--;
            if(b/100>=1){
                cuartos+=60;
                b=0;
            }
        }
        if(cuartos>0){
            c++;
            jugadas++;
            cuartos--;
            if(c/10>=1){
                cuartos+=9;
                c=0;
            }
        }
        //cout<<a<<" "<<b<<" "<<c<<endl;
    }
    cout<<jugadas;
    return 0;
}
//48 3 10 4
/*
16
0 19 26 20
18 19 26 0
48

6
0 25 32 6
0 25 32 6
66
*/

