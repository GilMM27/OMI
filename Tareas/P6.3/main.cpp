#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    //declaraci�n de variables
    int n[10];
    int n2[10];
    int ran,max=10;
    //loop para repetir el proceso 10 veces
    for(int i=1;i<=10;i++){
    //generaci�n de n�meros para llenar el primer array
    for(int i=0;i<10;i++){
        n2[i]=1+rand()%10;
    }
    //loop para llenar el segundo array
    for(int i=0;i<10;i++){
        //genera un n�mero random y asigna el valor de esa posici�n al segundo array
        ran=rand()%max;
        n[i]=n2[ran];
        //elimina el n�mero en la posici�n del n�mero random
        for(int j=ran;j<=10;j++){
            n2[j]=n2[j+1];
        }
        max--;
    }
    //imprime el resultado de la permutaci�n
    cout<<"permutacion "<<i<<": ";
    for(int i=0;i<10;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
    max=10;
    }

    return 0;
}
