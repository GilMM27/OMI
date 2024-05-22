#include <iostream>

using namespace std;

int multiplica(int multiplicando, int multiplicador){
    if(multiplicador==1){
        return multiplicando;
    }
    return multiplica(multiplicando, multiplicador-1)+multiplicando;
}

int main()
{
    cout<<"Numeros a multiplicar: ";
    int x,y;
    cin>>x>>y;
    int resultado = multiplica(x,y);
    cout<<resultado;

    return 0;
}


