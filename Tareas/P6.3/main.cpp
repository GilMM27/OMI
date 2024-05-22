#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    //declaración de variables
    int n[10];
    int n2[10];
    int ran,max=10;
    //loop para repetir el proceso 10 veces
    for(int i=1;i<=10;i++){
    //generación de números para llenar el primer array
    for(int i=0;i<10;i++){
        n2[i]=1+rand()%10;
    }
    //loop para llenar el segundo array
    for(int i=0;i<10;i++){
        //genera un número random y asigna el valor de esa posición al segundo array
        ran=rand()%max;
        n[i]=n2[ran];
        //elimina el número en la posición del número random
        for(int j=ran;j<=10;j++){
            n2[j]=n2[j+1];
        }
        max--;
    }
    //imprime el resultado de la permutación
    cout<<"permutacion "<<i<<": ";
    for(int i=0;i<10;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
    max=10;
    }

    return 0;
}
