#include <iostream>


using namespace std;

void funcion(string parametro){
    cout<<parametro;
}

int main()
{
    string texto;
    cin>>texto;
    funcion(texto);
    return 0;
}
